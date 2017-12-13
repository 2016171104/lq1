#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double amount = 22.0/7;
//cout<<setw(8)<<amount<<endl;
// cout<<amount<<"\n";
//cout <<setiosflags(ios::scientific);
//cout<<setprecision(6)<<amount<<endl;	
//cout<<setw(8)<<10
//    <<setw(8)<<20<<endl;
//cout<<setw(8)<<10
//    <<20<<endl;
//int number=1001;
//cout<<"Decimal:"<<dec<<number<<endl;
//cout<<"Hexadecimal:"<<hex<<number<<endl;
//cout<<"Octal:"<<oct<<number<<endl;
//cout<<"Hexadecimal:"<<hex
//<<setiosflags(ios::uppercase)
//<<number<<endl;//十六进制的大写输出
/*set the fill character   setfill
cout<<setfill('*')
<<setw(2)<<21<<endl
<<setw(3)<<21<<endl
<<setw(4)<<21<<endl;*/
//about alignment output
/*cout<<std::left//左对齐 <<setiosflags(ios::left)
<<setw(5)<<"1"
<<setw(5)<<"2"
<<setw(5)<<"3"<<endl;
cout<<std::right//右对齐
<<setw(5)<<1
<<setw(5)<<2
<<setw(5)<<3;*/     //可以两个都用std::但是不能两个都用setiosflags(ioa::)会导致后面一个失去作用


//强制限制小数点和符号
/*cout<<10.0/5<<endl;

cout<<setiosflags(ios::showpoint)
<<10.0/5<<endl;
cout<<setiosflags(ios::showpos)
<<10.0/5<<endl; */	//没有强制显示小数时如果是浮点数/整数可以整除会显示整数而非浮点数如10.0/5=2而不是2.0


 















}

