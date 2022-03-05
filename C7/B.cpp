#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,l,f,i,k;
	scanf("%d",&n);
	scanf("%d%d",&l,&f);
	if(n==0)
	{
		for(i=l;i<=f;i++)
		{
			printf("%d %.2lf\n",i,1.0*(1.0*(i*9)/5+32+0.0));
		}
	}
	if(n==1)
	{
		for(i=l;i<=f;i++)
		{
			printf("%d %.2lf\n",i,(1.0*5*(i-32))/9);
		}
	}
 	return 0;
}

