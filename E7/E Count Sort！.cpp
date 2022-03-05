#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int shu[10005]={0},n,m,i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		shu[m]++;
	}
	for(i=1;i<=10000;i++)
	{
		if(shu[i]!=0)
		{
			printf("%d:%d\n",i,shu[i]);
		}
	}
 	return 0;
}

