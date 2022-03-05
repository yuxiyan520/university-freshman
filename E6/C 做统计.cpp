#include <stdio.h>
#include <math.h>
#include <string.h>
long long f(long long);
long long m,t;
int main()
{
	scanf("%lld",&t);
	printf("%lld",f(t));
 	return 0;
}

long long f(long long n)
{
	if(n==0||n==1)
	return 1;
	else
	{
		return f(n-1)*(4*n-2)/(n+1);
	}
}
