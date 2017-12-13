#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int B[MAX];
int Merge(int a[],int n)
{
	int mid,s1,s2,i,b;
	mid=n/2;
	s1=0;
	mid=n/2;
	s2=mid;
	b=0;
	while(s1<mid&&s2<n)
	{
		if(a[s1]<=a[s2])
		B[b++]=a[s1++];
		else
		B[b++]=a[s2++];
	}
	if(s1<mid)
		for(i=s1;i<mid;i++)
		B[b++]=a[s1++];
		else
		for(i=s2;i<n;i++)
		B[b++]=a[s2++];
	for(i=0;i<n;i++)
	a[i]=B[i];
	return 1;
	}
int Mergesort(int a[],int n)
{
	if(n<=1)
	return 1;
	else{
		Mergesort(a,n/2);
		Mergesort(a+n/2,n);
		Merge(a,n);
		return 1;
	} 
}

	int main(int a[7],int n)
	{
	Mergesort(a, n);
		return 0;
		
	}














 
