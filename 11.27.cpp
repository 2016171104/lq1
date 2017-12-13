#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],n;
	int t,cout=0;
	for(n=0;n<10;)
	{
	scanf("%d",&a[n]);
	if(a[n]<0)
{
	n--;
	break;
}
	if(a[n]>100)
	continue;	
	n++;
    }
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<=n;i++)
	printf("%d ",a[i]);
	
    printf("\n");
    
 for(int i=0;i<=n;i++)
    {
    	if(a[i]<60)
    {
	printf("%d ",a[i]);
    	cout++;
    }
	}
	printf("%d\n",cout);
	printf("%d %d ",a[0],a[n]);

 } 
   
    
    
    
