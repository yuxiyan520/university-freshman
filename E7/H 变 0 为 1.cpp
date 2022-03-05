#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,m,k,t,i,x0[1002],y0[1002],x,y;
	long long min;
	scanf("%d%d%d%d",&n,&m,&k,&t);
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&x0[i],&y0[i]);
	}
	while(t--)
	{
		min=2000000006;
		scanf("%d%d",&x,&y);
		for(i=1;i<=k;i++)
		{
			if(fabs(x-x0[i])+fabs(y-y0[i])<min)
			min=fabs(x-x0[i])+fabs(y-y0[i]);
		}
		printf("%lld\n",min);
	}
 	return 0;
}

