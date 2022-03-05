#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double p=1.0*(a+b+c)/2;
	printf("%.1lf",sqrt(p*(p-a)*(p-b)*(p-c))); 
 	return 0;
}

