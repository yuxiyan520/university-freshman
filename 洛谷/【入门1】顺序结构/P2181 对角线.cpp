#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	unsigned long long int n,m;
	scanf("%llu",&n);
	printf("%llu",n*(n-1)/2*(n-2)/3*(n-3)/4);
 	return 0;
}


