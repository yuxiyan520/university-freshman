#include <stdio.h>
#include <math.h>
#include <string.h>
void f(int n)
{
	int i,j,wei=0;
	int a[10000]={1};
	int b[10000]={2};
	int c[10000]={0};
	if(n==1||n==2)
	printf("%d",n);
	else
	{
		for(i=3;i<=n;i++)
		{
			for(j=0;j<=wei;j++)
			{
				c[j]=a[j]+b[j];
				a[j]=b[j];
				b[j]=c[j];
			}
			for(j=0;j<=wei;j++)
			{
				if(c[j]>=10&&j!=wei)
				{
					c[j+1]+=(c[j]/10);
					c[j]%=10;
				}
				else if(c[j]>=10&&j==wei)
				{
					c[j+1]+=(c[j]/10);
					c[j]%=10;
					wei++;
				}
				if(b[j]>=10)
				{
					b[j+1]+=(b[j]/10);
					b[j]%=10;
				}
				if(a[j]>=10)
				{
					a[j+1]+=(a[j]/10);
					a[j]%=10;
				}
			}
		}
		for(i=wei;i>=0;i--)
		printf("%d",c[i]);	
	}
	
}

int main()
{
	int n;
	scanf("%d",&n);
	f(n);
 	return 0;
}

