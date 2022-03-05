#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	long long n,k;
	while((scanf("%lld",&n))!=EOF)
	{
		k=0;
		if(n==1)
		{
			printf("0\n");
		}
		else
		{
			while(n!=1)
			{
				if(n%2==1)
				{
					n=n*3+1;
					k++;
				}
				if(n%2==0)
				{
					n/=2;
					k++;
				}
			}
			printf("%lld\n",k);
		}
	}
 	return 0;
}

