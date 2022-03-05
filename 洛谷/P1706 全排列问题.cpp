#include <stdio.h>
#include <math.h>
#include <string.h>

int a[10],b[10]={0};
int n;
void Print()
{
	for(int i=1;i<=n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
}
void dfs(int m)
{
	if(m>n)
	{
		Print();
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			b[i]=1;
			a[m]=i;
			dfs(m+1);
			b[i]=0;
		}
	}
}
int main()
{
	scanf("%d",&n);
	dfs(1);
	return 0;
}
