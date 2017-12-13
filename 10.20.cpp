# include<iostream>
using namespace std;
int main()
{
//	int a;
//	(a=4)=28;
//	cout<<a<<"\n";  
int a=3;
//int b=++a;     //相当于a=a+1;b=a; 
//cout<<b<<"\n";
//cout<<a<<"\n";
//int c=a++;    //相当于c=a;a=a+1; 
//cout<<c<<"\n";
//cout<<a<<"\n";
++(++a);
cout<<a<<"\n";
//++(a++);   //a++ is not lvalue(左值) 
}
