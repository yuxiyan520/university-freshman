#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n%3==0)
	printf("%d",n/3);
	else
	printf("%d",n/3+1);
 	return 0;
}

