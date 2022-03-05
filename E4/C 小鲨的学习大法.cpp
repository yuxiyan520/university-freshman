#include <stdio.h>

int main()
{
	int n,i,j=0;
	scanf("%d",&n);
	if(n%2==0)
	{
		for(i=1;i<n/2;i++)
		{
			if(n%i==0)
			{
				j+=(n/i-1);
			}
			else
			j+=n/i;
		}
		j+=n/2;
	}
	else
	{
		for(i=1;i<(n/2+1);i++)
		{
			if(n%i==0)
			{
				j+=(n/i-1);
			}
			else
			j+=n/i;
	}
	j+=(n-1)/2;
	}
	printf("%d",j);
 	return 0;
}

