#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,a[505]={0},flag[505]={0},i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(flag[i]==1)
		continue;
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				flag[i]=1;
				flag[j]=1;
			}
		}
		if(flag[i]!=1)
		{
			printf("%d",a[i]);
			break;
		}
	}
 	return 0;
}

