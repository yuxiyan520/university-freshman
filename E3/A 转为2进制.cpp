#include <stdio.h>

int main()
{
	int n,m[40],i;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
	printf("00000000000000000000000000000000\n");
	if(n>0)
	{
		for(i=0;i<31;i++)
		{
			m[i]=n%2;
			n/=2;
		}
		printf("0");
		for(i=30;i>=0;i--)
		{
			printf("%d",m[i]);	
		}
		printf("\n");
	}
	if(n<0)
	{
		n=n*(-1);
		for(i=0;i<31;i++)
		{
			m[i]=n%2;
			n/=2;
		}
		printf("1");
		for(i=30;i>=0;i--)
		{
			printf("%d",m[i]);	
		}
		printf("\n");
	}
	}
 	return 0;
}

