#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,a,b,tai,sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&tai);
		if(tai==0)
		{
			b=a%10;
			sum+=b;
		}
		else if(tai==1)
		{
			continue;
		}
		else if(tai==2)
		{
			sum-=2;
			if(sum<0)
			{
				sum=0;
			}
		}
	}
	if(sum>=37)
	printf("%d",sum);
	else
	printf("See you next year !");
 	return 0;
}

