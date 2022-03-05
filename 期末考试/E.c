#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void K(int a[5][5],int x,int y)
{
	int i,j,k,bi=1,bj=1;
	long long sum,b[4][4];
	for(i=1;i<=4;i++)
	{
		if(i==x)
		continue;
		for(j=1;j<=4;j++)
		{
			if(j==y)
			continue;
			b[bi][bj]=a[i][j];
			bj++;
		}
		bi++;
		bj=1;
	}
	sum=b[1][1]*b[2][2]*b[3][3]+b[1][2]*b[2][3]*b[3][1]+b[1][3]*b[2][1]*b[3][2]-(b[1][3]*b[2][2]*b[3][1]+b[1][2]*b[2][1]*b[3][3]+b[1][1]*b[2][3]*b[3][2]);
	printf("%lld\n",sum);
}
int main()
{
	int a[5][5];
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	K(a,1,2);
	K(a,4,3);
	K(a,3,3);
	K(a,1,4);
	K(a,2,4);
	K(a,3,3);
	K(a,2,2);
	K(a,4,1);
 	return 0;
}


