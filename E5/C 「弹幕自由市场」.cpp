#include <stdio.h>
int n,m,a[1010],i,j,cha=-1,l,qi,mo;
long long qq,qa=0;
int main()
{
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[j]-a[i]>0&&m>=a[i])
			{
				cha=a[j]-a[i];
				qi=i;
				mo=j;
				l=m%a[qi];
				qq=(long long)(m-l)/a[qi]*a[mo]+l;
				if(qq>qa)
				qa=qq;
			}
		}
	}
	if(cha<=0)
	{
		printf("%d",m);
	}
	else
	{
		printf("%lld",qa);
	}
 	return 0;
}

