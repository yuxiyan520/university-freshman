#include <stdio.h>
#include <math.h>
#include <string.h>
int gcd(int x,int y)
{
	int i;
	if(x<y)
	{
		i=y;
		y=x;
		x=i;	
	}
	if(y==0)
	return x;
	
	return gcd(y,x%y);
}
void yue(int *x,int *y)
{
	int i=gcd(*x,*y);
	*x/=i;
	*y/=i;
}
int main()
{
	int t,a,b,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		yue(&a,&b);
		yue(&c,&d);
		a=a*d+b*c;
		b=b*d;
		yue(&a,&b);
		printf("%d %d\n",a,b);
	 } 
 	return 0;
}

