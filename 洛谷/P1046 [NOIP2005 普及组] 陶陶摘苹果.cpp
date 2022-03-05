#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int high[11],gou,i,sum=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&high[i]);
	}
	scanf("%d",&gou);
	for(i=1;i<=10;i++)
	{
		if(high[i]<=gou+30)
		{
			sum++;
		}
	}
	printf("%d",sum);
 	return 0;
}

