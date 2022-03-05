#include <stdio.h>
#include <math.h>
#include <string.h>
int n,k,sum=0;
unsigned long long ll=0;
int a[20],b[20]={0};
int Iszhi(int q)//质数返回1，非质数返回0 
{
	int flag=1;
	if(q==1)
	return 0;
	if(q==2||q==3)
	return 1;
	for(int i=2;i<=(q/2);i++)
	{
		if(q%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
void dfs(int m)
{
	if(m>=k)
	{
		if((Iszhi(sum))==1)
		{
			ll++;
		}
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			b[i]=1;
			sum+=a[i];
			dfs(m+1);
			sum-=a[i];
			b[i]=0;
		}
	}
}
Jie(unsigned long long *p)
{
	for(int i=2;i<=k;i++)
	{
		*p/=i;
	}
}
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	dfs(0);
	Jie(&ll);
	printf("%llu",ll);
 	return 0;
}

