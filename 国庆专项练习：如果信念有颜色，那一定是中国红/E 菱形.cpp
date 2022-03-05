#include <stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		for(j=0;j<((n/2)-(i/2));j++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("*");
		printf("\n");
	}
	for(i=n-2;i>=1;i-=2)
	{
		for(j=0;j<((n/2)-(i/2));j++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("*");
		printf("\n");
	}
 	return 0;
}

