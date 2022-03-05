#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	double a;
	scanf("%lf",&a);
	if(a-150<=0)
	{
		printf("%.1lf",a*0.4463);
	}
	else if(a-400<=0)
	{
		printf("%.1lf",150*0.4463+(a-150)*0.4663);
	}
	else
	{
		printf("%.1lf",150*0.4463+250*0.4663+(a-400)*0.5663);
	}
 	return 0;
}

