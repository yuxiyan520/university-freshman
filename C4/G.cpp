#include <stdio.h>

int main()
{
	int n,m,x[10000],y[10000],s[10000],i,j,x0,y0,l[10000],df=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&s[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&x0,&y0);
		for(j=0;j<n;j++)
		{
			if((x0==x[j]||y0==y[j])&&l[j]==0)		
			{
				l[j]=1;
				df+=s[j];
			}
		}
	}
	printf("%d",df);
 	return 0;
}

