#include<stdio.h> 
int fetchstones(int m)//m为石头总数 
{
	int i;
	int f[1000]={0};
	f[0]=0;
	f[1]=0;
	f[2]=1;
	f[3]=0;
	f[4]=1;
	f[5]=0;
	f[6]=1;
	f[7]=0;
	f[8]=1;
	for(i=9;i<=1000;i++)
	{
		if(f[i-1]==0||f[i-3]==0||f[i-7]==0||f[i-8]==0)
		f[i]=1;
		else f[i]=0;
	}
	printf("%d\n",f[i]); 
}
int main()
{
	int n,a[100];//n表示比赛进行的局数
	scanf("%d",&n);
	for(int i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
		fetchstones(a[i]);
	}
	return 0;
}
   #include<stdio.h>  
    void fun(int a)
	{  
        int s[1000]={0};  
        s[0]=0;  
        s[1]=0;  
        s[2]=1;  
        s[3]=0;  
        s[4]=1;  
        s[5]=0;  
        s[6]=1;  
        s[7]=0;  
        s[8]=1;  
        for(int i=9;i<1000;i++){  
            if(s[i-1]==0||s[i-3]==0||s[i-7]==0||s[i-8]==0)  
                s[i]=1;  
            else  
                s[i]=0;  
        }  
        printf("%d\n",s[a]);  
    }  
    int main(){  
        int i,n,a[100];  
        scanf("%d",&n);  
        for(i=0;i<n;i++){  
            scanf("%d",&a[i]);  
            fun(a[i]);  
        }  
        return 0;  
    }  
