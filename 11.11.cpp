/*#include<iostream>
using namespace std;
void swap(double  x,    
          double  y){
     double temp ;
     temp=x ;
     x=y;
     y=temp ;  }
int main(void){
     double x=2 , y=4 ;
     //cout<<"������x��y��ֵ"   <<'\n';
     //scanf("%lf%lf",&x,&y) ;
     swap(x,y) ;
     cout<<"x="<<x<<'\t' 
       <<"y="<<y<<'\n';}
       
  */     
#include<stdio.h>
int swap(int *a,int *b)
{
	int t;
	printf("%d %d\n",*a,*b);
	if(a>b)
	{
	t=*a;*a=*b;*b=t;	
	}
	printf("%d %d\n",a,b);
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("%d  %d",x,y);
	return 0;
}

/*#include <iostream>  
  
using namespace std ;  
  
int main()  
{  
    int  a ,b ,r ;  
    cout << "��������Ҫ�����Լ�������������ε������ÿո��������" << endl ;  
    cin >> a >> b ;  
    for ( ;b!=0 ;)  //��forѭ�������շת�����  
    {  
        r = a%b ;  
        a = b ;  
        b = r ;  
    }  
    cout << "�������������Լ��Ϊ��" << a << endl ;  
    return 0 ;  
} */ 
/*#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	scanf("%f",&x);
	if(x>=0)
	printf("f(%.2f)=%.2f",x,pow(x,0.5));
	else
	printf("f(%.2d)=%.2f",x,sqrt(x+1)+2*x+1.0/x);
	return 0;
}*/









