#include <stdio.h>
#include <math.h>
#define pi 3.1415926535
#define e 2.718281828
int main()
{
  double x1,y1,z1,a,b,c,d,p,x,y,z,m,n,q;
  scanf("%lf%lf%lf",&x1,&y1,&z1);
  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&p);
  m=-1.0*(((x1-p)*(x1-p)+(y1-p)*(y1-p))/(2.0*c*c));
  n=exp(m)/sqrt(2.0*pi*c);
  q=(fabs(z1)*tan(2*d))/sqrt((b*b)/(a*a)+1.0);
  if(x1>0)
  x=n*(x1-q);
  if(x1<0);
  x=n*(x1+q);
  y=n*(y1+b/a*(x-x1));
  z=(pow(atan(p*(cos(x))),log(fabs(sin(x))+1)))/(2.0+(fabs(sinh(y))));
  printf("%.2lf\n",x);
  printf("%.2lf\n",y);
  printf("%.2lf",z);
 return 0;
}

