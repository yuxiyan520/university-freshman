#include <stdio.h>
int gcd(int,int); //����󹫱��� 
int lcm(int,int); //����С������ 
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",lcm(a,b));
 	return 0;
}

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
