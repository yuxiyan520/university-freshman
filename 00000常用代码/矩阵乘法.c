#include <stdio.h>
#include <string.h>
void juzhen(int [][110],int [][110],int [][110],int);
int a1[110][110],a2[110][110],c[110][110]={0},i,j,t;
int main()
{
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	juzhen(a1,a2,c,t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
 	return 0;
}

void juzhen(int a[][110],int b[][110],int c[][110],int t)
{
	int i,j,k;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			for(k=0;k<t;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}

