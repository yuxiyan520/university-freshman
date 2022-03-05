#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a[3][3]={0},b[3][3]={0},c[3][3]={0},i,j,k;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			for(k=1;k<=2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d ",c[i][j]);
		}
	}
 	return 0;
}

