#include <stdio.h>
int  n,m,a[200005],b[200005],c[200005],d[200005],i,j,ci[200005]={0};
int main()
{
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	scanf("%d%d",&a[i],&b[i]);
	for(i=1;i<=m;i++)
	scanf("%d%d",&c[i],&d[i]);
	i=1;
	j=1;
	while(i<=n&&j<=m)
	{
		if(b[i]>d[j])
		{
			printf("%d %d ",a[i],b[i]);
			i++;
			continue;
		}
		if(b[i]<d[j])
		{
			printf("%d %d ",c[j],d[j]);
			j++;
			continue;
		}
		if(b[i]==d[j])
		{
			if(a[i]+c[j]==0)
			{
				i++;
				j++;
				continue;
			}
			else
			{
				printf("%d %d ",a[i]+c[j],b[i]);
				i++;
				j++;
			}
		}
	}
	if(i<=n)
	{
		for(i;i<=n;i++)
		printf("%d %d ",a[i],b[i]);
	}
	if(j<=m)
	{
		for(j;j<=m;j++)
		printf("%d %d ",c[j],d[j]);
	}
 	return 0;
}



//for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=m;j++)
//		{
//			if(ci[j]==1)
//			continue;
//			while(b[i]<d[j])
//			{
//				printf("%d %d ",c[j],d[j]);
//				ci[j]=1;
//			}
//			if(b[i]>d[j])
//			{
//				printf("%d %d ",a[i],b[i]);
//				break;
//			}
//			if(b[i]==d[j])
//			{
//				ci[j]=1;
//				if(a[i]+c[j]==0)
//					break;
//				else
//				{
//					printf("%d %d ",a[i]+c[j],b[i]);
//				}
//			}
//		}
//	}
