#include <stdio.h>

int main()
{
	int n,a[100000],b[100000],i,ma=-100000,mb=-100000,ci,a0[100000]={0},k,q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>ma)
		{
			ma=a[i];
			ci=0;
		}
		if(a[i]==ma)
		{
			a0[i]=1;
			k=i;
			ci++;
		}
	}
	for(i=0;i<=k;i++)
	{
		if(a0[i==1&&a[i]!=ma])
		a0[i]=0;
	}
	if(ci==1)
	{
		printf("%d\n",k+1);
		printf("%d %d",a[k],b[k]);
	}
	else
	{
		for(i=0;i<=k;i++)
		{
			if(b[i]>=mb && a0[i]==1)
			{
				mb=b[i];
				q=i;
			}
		}
		printf("%d\n",q+1);
		printf("%d %d",ma,mb);
	}
 	return 0;
}

