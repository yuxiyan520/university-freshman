#include <stdio.h>
#include <math.h>
int main()
{
	double x[5],y[5];
	int i;
	double x0,y0,r,s,a,b,c,p;
	for(i=0;i<2;i++)
	scanf("(%lf,%lf)\n",&x[i],&y[i]);
	scanf("(%lf,%lf)",&x[2],&y[2]);
	a=sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]));
	b=sqrt((x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2]));
	c=sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
	x0=(a*x[0]+b*x[1]+c*x[2])/(a+b+c);
	y0=(a*y[0]+b*y[1]+c*y[2])/(a+b+c);
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	r=2.0*s/(a+b+c);
	printf("(%.3lf,%.3lf)\n",x0,y0);
	if(fabs(x0)<1e-6)
	printf("x^2+(y%c%.3lf)^2=%.3lf^2",y0>0?'-':'+',fabs(y0),r);
	else if(fabs(y0)<1e-6)
	printf("(x%c%.3lf)^2+y^2=%.3lf^2",x0>0?'-':'+',fabs(x0),r);
	else if(fabs(x0)<1e-6 && fabs(y0)<1e-6)
	printf("x^2+y^2=%.3lf",r);
	else
	printf("(x%c%.3lf)^2+(y%c%.3lf)^2=%.3lf^2",x0>0?'-':'+',fabs(x0),y0>0?'-':'+',fabs(y0),r);
 	return 0;
}

