#include <stdio.h>
#include <math.h>
#include <string.h>
void f(int [][105],int [][105],int [][105]);
int n,a[105][105],a0[105][105],b[105][105],i,j,k;
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			a0[i][j]=a[i][j];
		}
	}
	for(k=0;k<n-1;k++)
	{
		f(a,a0,b);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a0[i][j]=b[i][j];
			}
		}
	}
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a0[i][j]);
			}
			printf("\n");
		}
 	return 0;
}

void f(int c[][105],int d[][105],int e[][105])
{
	int i,j,k,flag;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			flag=0;
			for(k=0;k<n;k++)
			{
				if(c[i][k]==1&&d[k][j]==1)
				{
					e[i][j]=1;
					flag=1;
				}
			}
			if(flag==0)
			e[i][j]=0;
		}
	}
}
