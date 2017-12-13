/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const float pi=3.1415926;
	float r,area;   //圆的半径
    while(1)
	{
		cin>>r;
		area=pi*r*r;    //求圆的面积
		cout<<setw(10)
		<<r<<"\n"
		<<setw(10)
		<<area<<endl;
	 } 
 } */
 
 
/* #include<iostream>
 #include<iomanip>
using namespace std;
int main()
{
	const double e=2.718281828;
	cout<<setiosflags(ios::fixed)
	<<setprecision(10)<<e<<endl;
	printf("%.10lf\n",e);
	cout<<setprecision(10)<<e<<endl;
	cout<<setiosflags(ios::scientific)
	<<setprecision(8)<<e<<endl;
 } */
 
 
 
 
/*#include<iostream>
 using namespace std;
 int main()
 {
 	cout<<"size of char     "<<sizeof(char)<< "byte"<<endl;
 }*/
 
 
 

//32页 

/*#include<iostream>
 #include<iomanip>
 #include<math.h>
 using namespace std;
 int triangle(double a,double b,double c);//函数声明 
 int main(double x,double y,double z)
 {
 	double area; 
 	cin>>x>>y>>z;
 	triangle(x,y,z);   //函数调用 
 	cout<<"area of triangle is  "
 	<<setiosflags(ios::fixed)
	<<setw(5)
    <<(double)area<<endl;
 	
 }
 	int triangle(double a,double b,double c)   //函数定义 
 	{
 		double s,area;
 		s=(a+b+c)/2.0;
 		area=(double)sqrt(s*(s-a)*(s-b)*(s-c));
	 }*/
	 
	 
	 
#include<iostream>
#include<conio.h>
using namespace std;
int add(int x,int y);
int main()
{
	cout<<"In main():\n";
	int a,b,c;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	
	cout<<"Calling add():\n";
	c=add(a,b);
	
	cout<<"\nBack in main():\n";
	cout<<"c was set to "<< c <<endl;
	
	cout<<"\nExiting...\n";
//	getche();
sty
}
int add(int x,int y)
{
	cout<<"In add(),received "<< x <<" and "<< y <<endl;
	cout <<"and return "<< x+y <<endl;
	return x+y;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
