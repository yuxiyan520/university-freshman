#include <stdio.h>
#include <math.h>
#include <string.h>
double fx(double,double,double);
double fy(double,double,double);
int n,i;
double x[102],y[102],x2[102],y2[102],the;
int main()
{
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("(%lf,%lf)\n",&x[i],&y[i]);		
	}
	scanf("theta=%lf",&the);
	for(i=1;i<=n;i++)
	{
		printf("(%.2lf,%.2lf)\n",fx(x[i],y[i],the),fy(x[i],y[i],the) );
	}
 	return 0;
}

double fx(double x0,double y0,double th)
{
	return x0*cos(th)+y0*sin(th);
}

double fy(double x0,double y0,double th)
{
	return y0*cos(th)-x0*sin(th);
 } 
