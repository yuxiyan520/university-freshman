#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int k,i;
	scanf("%d",&k);
	for(i=1;i<=99;i++)
	{
		if(i%k==0)
		continue;
		if(i/10==k||i%10==k)
		continue;
		printf("%d ",i);
	}
 	return 0;
}

