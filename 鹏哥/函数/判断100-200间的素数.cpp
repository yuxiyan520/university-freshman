#include <stdio.h>
#include <math.h>
#include <string.h>
int Issushu(int);
int main()
{
	int n;
	for(n=100;n<=200;n++)
	{
		if(Issushu(n)==1)
		printf("%d ",n);
	}
 	return 0;
}

int Issushu(int m)
{
	int i;
	for(i=2;i<=sqrt(m);i++)
	{
		if(m%i==0)
		return 0;
	}
	return 1;
}
