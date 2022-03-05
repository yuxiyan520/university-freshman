#include <stdio.h>
#include <math.h>
double a,b,c;
double cos_c(double,double,double);//À„cos c
double sin_c(double,double,double);//À„sin c 
int main()
{
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%lf",cos_c(a,b,c));
	printf("%lf",sin_c(a,b,c));
 	return 0;
}

double cos_c(double a,double b,double c)
{
	return (a*a+b*b-c*c)/(2*a*b);
}

double sin_c(double a,double b,double c)
{
	return sqrt(1-cos_c(a,b,c)*cos_c(a,b,c));
}
