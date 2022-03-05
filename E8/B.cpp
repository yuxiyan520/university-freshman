#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int m,n,a[105][105]={0},b[105][105],i,j,i0,j0,add,num;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			add=0;
			num=0;
			for(i0=i-1;i0<=i+1;i0++)
			{
				for(j0=j-1;j0<=j+1;j0++)
				{
					if(a[i0][j0]!=0)
					{
						add+=a[i0][j0];
						num++;
					}
				}
			}
			b[i][j]=(int)((double)add/num+0.5)/1;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%3d ",b[i][j]);
		}
		printf("\n");
	}
 	return 0;
}

