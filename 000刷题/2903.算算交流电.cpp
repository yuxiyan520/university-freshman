#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%.2lf %.2lf",1.0*(a*c+b*d)/(c*c+d*d),1.0*(b*c-a*d)/(c*c+d*d));
 	return 0;
}
