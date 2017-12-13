#include<stdio.h> 
#include<math.h>
int main() 
{
	double x,m,sinx=0,c,n=1,i=1,sign=1;
	scanf("%lf",&x);
	while(fabs(sinx)>=1e-6)
	{
		for(n=1;i<=n;i++)
		c*=n;
		sinx=sinx+pow(x,n)/(c*sign);
		n=n+2;
		sign*=-1;
	}
	printf("%.5lf\n",sinx);
    return 0; 
} 
