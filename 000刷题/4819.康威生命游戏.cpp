#include <stdio.h>
int sheng(int [][102],int,int,int);
int si(int [][102],int,int,int);
int n,k,a[102][102],c[102][102],i,j;
int main()
{
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	while(k--)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==1)
				c[i][j]=sheng(a,i,j,n);
				else
				c[i][j]=si(a,i,j,n);
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				a[i][j]=c[i][j];
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
 	return 0;
}

int sheng(int b[][102],int i,int j,int n)
{
	int l=b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
	if(l<2||l>3)
	return 0;
	else
	return 1;
}

int si(int b[][102],int i,int j,int n)
{
	int l=b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
	if(l==3)
	return 1;
	else
	return 0;
}
