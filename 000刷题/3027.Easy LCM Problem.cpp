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
int lcm(int x,int y)
{
	return x*y/gcd(x,y);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",lcm(a,b));
 	return 0;
}

