/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
int x[MAX];
int cnt=0;
int n;
int constraints(int i)
{
	int k;
	for(k=0;k<i;k++)
	{
		if(x[i]-x[k]==i-k||x[i]-x[k]==k-i)
		return 0;
	}
	return 1;
 } 
 
 
 int swap(int i,int j)
 {
 	int k;
 	k=x[i];
 	x[i]=x[j];
 	x[j]=k;
 	return 1;
 }
 
 
 int DFS(int i)
 {
 	int k;
 	if(i>=n)
    cnt++;
 	else 
 	for(k=i;k<n;k++)
 {
 	swap(i,k);
 	if(constraints(i))
 	DFS(i+1);
 	swap(i,k);
 }
    return 1;
 }
 
 
 int Quee()
 {
 	int i,j;
 	scanf("%d",&n);
 	cnt=0;
 	for(i=0;i<n;i++)
 	DFS(i);
	return 1;
 }
 
 int mian()
 {
 	Quee();
 	printf("%d",cnt);
 }
 #include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
   
#define INITIAL -10000   
int n;
int a[n];

  
void init()    
{  
    int *p;  
    for (p = a; p < a + n; ++p)   
    {  
        *p = INITIAL;  
    }  
}   
  
int valid(int row, int col)    
{  
    int i;  
    for (i = 0; i < n; ++i) 
    {  
        if (a[i] == col || abs(i - row) == abs(a[i] - col))    
            return 0;  
    }  
    return 1;  
}     
void queen()      
{    
    int i = 0, j = 0;  
    int cnt=0; 
    while (i < n)  
    {  
        while (j < n)      
        {  
            if(valid(i, j))      
            {  
                a[i] = j;         
                j = 0;            
                break;  
            }  
            else  
            {  
                ++j;              
            }  
        }  
        if(a[i] == INITIAL)         
        {  
            if (i == 0)               
                break;  
            else                      
            {  
                --i;  
                j = a[i] + 1;         
                a[i] = INITIAL;      
                continue;  
            }  
        }  
        if (i == cnt - 1)            
        {  
            cnt++;
            j = a[i] + 1;              
            a[i] = INITIAL;             
            continue;  
        }  
        ++i;                
    }  
    printf("%d",cnt);
}  
  
int main(void)  
{  
int n;
scanf("%d",&n);
    init();  
    queen();  
    return 0;  
}  */
 
 /*#include<stdio.h>
 #include<string.h>
 
 long n,tmp;
 long map[11];
 
 int  DFS(int k)
 {
     int i,j,flag;
     if(k==n+1)
     {
         tmp++;
         return;
     }
    else
     {
         for(i=1;i<=n;++i)
        {
             map[k]=i;
             flag=1;
            for(j=1;j<k;++j)
            {
                 if(map[j]==i||i-k==map[j]-j||i+k==map[j]+j)   // 注：1、i=map[k]  2、不在同一条斜线的两点的含义是行标到对角线的的距离不相等
                 {
                    flag=0;
                     break;
                 }
             }
             if(flag)
                 DFS(k+1);
         }
     }
 }
 
 int main()
 {
     long i,m;
     long ans[15];
   for(n=1;n<=15;++n)
     {
         tmp=0;
         DFS(1);
        ans[n]=tmp;
     }
     	scanf("%ld",&m);
         printf("%ld",ans[m]);
     return 1;
 }*/
/* #include <stdio.h>  
#include <math.h>  
#define N 16  
  
int x[N];           
int n;            
int sum=0;          
  
int place(int k)  
{  
    int i;  
    for(i=1;i<k;i++)  
       if(fabs(k-i)==fabs(x[k]-x[i])||x[k]==x[i])  
           return 0;  
       return 1;  
}  
int queen(int k)  
{  
    int i;  
    if(k>n)  
        sum++;  
    else  
       for(i=1;i<=n;i++)  
       {  
           x[k]=i;  
           if(place(k))  
               queen(k+1);  
       }  
       return sum;  
}  
int main()  
{  
    scanf("%d",&n);  
    printf("%d\n",queen(1));  
    return 0;  
} */ 




 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
