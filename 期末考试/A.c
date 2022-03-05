#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n,i,j,l;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(l=i;l>=1;l--)
		{
			printf("*");
			if(l!=1)
			printf(" ");
		}
		printf("\n");	
	}
 	return 0;
}

