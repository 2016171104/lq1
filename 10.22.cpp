/*#include<stdio.h>
#define MAX 100
int f[MAX]; 
int game(int n);
int main(int n)
{
	int m;
	int i=0,j;
	scanf("%d",&m);
	while(i++<=m)
	{
		scanf("%d",&n);
		printf("%d\n",game(n));
	}
}
int game(int n)      //取石头 
{
	int i;
	f[0]=f[2]=f[4]=f[6]=f[8]=1;
	f[1]=f[3]=f[5]=f[7]=0;
	for(i=9;i<=n;i++)
	{
		f[i]=!(f[i-1]||f[i-3]||f[i-7]||f[i-8]);
	}
	return f[n];
}*/


/*#include<stdio.h>
#define max(a,b) a>b?a:b
int H[1000];
int FILLD(int n,int c,int w[],int v[]);
int main(int n,int c,int w[],int v[])
{
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&w[i]);
	for(i=1;i<=n;i++)
	scanf("%d",&v[i]);
	scanf("%d",&c);
	FILLD(n,c,w,v);
    printf("%d",H[c]);
	
}
int FILLD(int n,int c,int w[],int v[])
{
	int i,j;
    H[0]=0;
	for(i=1;i<=n;i++)
{
	for(j=c;j>=w[i];j--)
{
	H[j]=max(H[j],v[i]+H[j-w[i]]);
}
}
	return H[c];
}*/
  //0-1背包问题 

/*#include<iostream>
using namespace std;
int max(int a,int b){
 return a>b?a:b;
}
int find(int n,int c,int W[],int V[]){//n是有n个物体，容量为c，W是重量，v是价值
 	int *H=new int[c+1],i,j;//新申请空间
 	for(i=0;i<=c+1;i++)
 		H[i]=0;//不置0就都是乱码 
 	for(i=1;i<=n;i++){
  		for(j=c;j>=W[i];j--){
			H[j]=max(H[j],V[i]+H[j-W[i]]);//j就是V 
  		}
 	}
 return H[c];
}
int main()
{
 	int n,i,c;
 	cin>>n;
 	int *V=new int[n+1];//价值
 	int *W=new int[n+1];//重量
 	for(i=1;i<=n;i++){
  	cin>>W[i]; 
 	}
 	for(i=1;i<=n;i++){
 	 cin>>V[i]; 
 	}
 	cin>>c;
 	cout<<find(n,c,W,V)<<endl;
	 delete []W;
 	delete []V;
  
 return 0;
}
*/ 

/*#include<stdio.h>
#define MAX 100
#include<algorithm>
using namespace std;
typedef struct TClient2
{
	int id;
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
	for(i=0;i<=n;i++)
	m[i]=i;
	for(i=0;i<n;i++)
	{
		free=m[B[i].d];
		if(free>0)
		{
			A[free]=B[i];
			cnt++;
			j=free;
			while(m[j]=free)
			m[j++]=m[free-1]; 
		}
	}
	return cnt;
 } 
 int main(int n,TClient2 B[],TClient2 A[100])
 {
 	int i,j,k,sum=0;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	scanf("%d%d",&B[i].d,&B[i].f);
    
    for(i=0;i<n;i++)
	{
	j=GreedySchedule(B,A,n);
    sum+=A[i].f;
}
	printf("%d",sum) ;
 }
*/











 
