/*#include<iostream>   //VC6.0��������iostream.h 
#include<conio.h>
using namespace std;   //Ϊ����std�������еı�ʶ������Ч�������¶��� 
int main()
{
	 cout<<"please put the b key to hear a bell.\n";
	 char ch=getche();
	 cout<<"\n";
	 if (ch=='b')
	 cout<<'\a';
	 else if(ch=='\n')
	 cout<<"what a boring select on...\n"; //��� 
	 else
	 cout<<"bye!\n";
	 
}/*
/*#include <iostream>
using namespace std;
int C(int b);
int main()
{
	int i,n;
	long int Sn;
	cin>>n;
	i=1;
	Sn=0;
	do 
	{
		Sn=Sn+C(i);
		i++;
	} while(i<=n);
    cout<<Sn<<endl;
    return 0;	
 } 
 int C(int b)
 {
 	int a;
 	long int C;
 	C=1;
 	a=1;
    do
    {
    	C=C*a;
    	a++;
	} while (a<=b);
 	return C;	  
 }
*/
/*#include<iostream>
using namespace std;
int main()
{
	int i=5,j=7;
	int a;
	a=i!=j;
	cout<<a; 
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=10;i++)
	for(j=0;j<=10;j++)
	if(i*j==27)
//	goto End;
//	End:
		cout<<i<<"*"<<j<<"=27\n";    //�Ӷ���ѭ����ֱ������ѭ������goto; 
}
*/
/*#include<iostream>
#include<iomanip>
#include<math.h> 
using namespace std;
int main()
{
	double s=0,x=1;
	long int k=1;
	int sign=1;
	
	while(fabs(x)>pow(10,-8))
	{
		s+=x;
		k+=2;
		sign*=(-1);
		x=sign/double(k);
	}
	
	s*=4;
	cout<<"the pi is "
	<<setiosflags(ios::fixed)
	<<setprecision(8)
	<<s<<endl;
}*/
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"please input a number\n";
	cin>>n;
	
	for(i=2;i<n;i++)
		if(n%i==0)
		break;
	if(n==i)
		cout<<n<<" is prime\n";
	else
		cout<<n<<" is not prime\n";
	}
		





