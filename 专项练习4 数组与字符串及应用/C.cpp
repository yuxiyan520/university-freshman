#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{	
	int n,gao[105],i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&gao[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if((gao[i]-gao[j]>10||gao[j]-gao[i]>10)&&((gao[i]-gao[j])%2==0))
			printf("%d %d\n",i,j);
		}
	}
 	return 0;
}

