#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_N 100000
int f(int n,int k)
{
	unsigned long long int a[MAX_N+1]={0};
	for(int i=1;i<=k;i++)
	{
		if(i==1)
		{
			a[i]=1;
			continue;
		}
		for(int j=i-1;j>=1;j--)
		{
			a[i]+=a[j];
			a[i]%=100003;
		}
		a[i]++;
		a[i]%=100003;
	}
	for(int j=1;j<=k;j++)
	{
		a[k+1]+=a[k+1-j];
		a[k+1]%=100003;
	}
	a[k+1]%=100003;
	for(int i=k+2;i<=MAX_N;i++)
	{
		a[i]=(2*a[i-1]%100003-a[i-k-1]%100003+100003)%100003;
	}
	return a[n]%100003;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",f(n,k));
 	return 0;
}

