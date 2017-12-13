/*#include<stdio.h>
#define MAX 100
#include<algorithm>
using namespace std;
typedef struct TClient2
{
	int d;
	int f;
 };
 bool cmp(const TClient2 a,const TClient2 b)
 {
 	return a.f>b.f;
 }
 int GreedySchedule(TClient2 B[],TClient2 A[],int n)
 {
 	int i,j;
 	int m[MAX],free,cnt=0;
 	sort(B,B+n,cmp);
 	for(i=1;i<=n;i++)
	 m[i]=i;
 	for(i=0;i<n;i++)
 {
		free=(B[i].d);
 	if(free>0)
 	{
 		
	 A[free]=B[i];
 	cnt++;
 	j=free;
 	while(m[j]==free)
 	m[j++]=m[free-1];
 }
 }
 return cnt; 
 }
 int main()
 {
 	TClient2 B[100];
 	int i,j,k,n;
 	int sum=0;
 	scanf("%d",n);
 	for(i=1;i<=n;i++)
 	{
 		scanf("%d",&B[i].d);
		 scanf("%d",&B[i].f);	
	 }
	 TClient2 A[n];
	 j=GreedySchedule(B,A,n);
	 for(i=1;i<=n;i++)
	 sum+=A[i].f;
	 printf("%d",sum);
 }*/
 
 
#include<stdio.h>
int main()
{
	int x=0;
	int y;
printf("%d",++x);
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
