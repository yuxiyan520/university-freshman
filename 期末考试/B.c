#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h> 
int main()
{
	unsigned int n,m;
	scanf("%u",&n);
	m=1<<16;
	m--;
	n=n^m;
	printf("%u",n);
 	return 0;
}

