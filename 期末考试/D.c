#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int k,x;
	char format[10];
	double m;
	scanf("%d%d",&k,&x);
	scanf("%lf",&m);
	printf("%%%d.%dlf\n",k,x);
	sprintf(format,"%%%d.%dlf\n",k,x);
	printf(format,m);
 	return 0;
}


