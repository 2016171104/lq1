/*报数 (30分) 

C时间限制：3000 毫秒 |  C内存限制：3000 Kb


题目内容：


N个人围成一圈，从第1个人开始顺序报号1、2、3。凡报到“3”者退出圈子。找出最后留在圈子中的人原来的序号。要求用指针做。
 输入描述


输入人数N

输出描述


最后留在圈子中的人原来的序号。

 输入样例


输入样例1：13
输入样例2: 15

输出样例


输出样例1: 13
输出样例2: 5

*/
#include<stdio.h>
#define max 200
int main()
{
	int i,k,n,m,num[max],*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	num[i]=i+1;
	i=0;
	k=0;
	m=0;
	while(m<n-1)
	 {
        if(num[i]!=0)
            k++;
        if(k==3)
        {
            num[i]=0;//对于出圈人数，其值置为0。
            m++;//圈外人数加1。
            k=0;//重新开始报数。
        }
        i++;//指针指向下一位。
        if(i==n)//数组移到最后一位时让它变道第一位 
            i=0;
    }
    for(i=0;i<n;i++)
        if(num[i]!=0)
            printf("%d\n",num[i]);
    return 0;
}








#include<stdio.h>
#define max 200
int main()
{
    int i,k,n,m,num[max],*p;
    scanf("%d",&n);
    p=num;//指针指向数组第一位num[0] 
    for(i=0;i<n;i++)//把n个人进行编号为1—n。
        *(p+i)=i+1;
    i=0;k=0;m=0;
    while(m<n-1)//m为圈外人数。
    {
        if(*(p+i)!=0)//报数。
            k++;
        if(k==3)
        {
            *(p+i)=0;
            m++;
            k=0;
        }
        i++;
        if(i==n)
            i=0;
    }
    for(i=0;i<n;i++)
        if(*(p+i)!=0)
            printf("\n最后一位出圈的人的编号：%d\n",*(p+i));
    return 0;
}



































