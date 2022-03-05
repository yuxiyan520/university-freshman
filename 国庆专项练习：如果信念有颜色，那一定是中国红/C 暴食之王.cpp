#include <stdio.h>

int main()
{
	int n,i;
	long int x,a;
	scanf("%d",&n);
	scanf("%ld",&x);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a);
		if(a>=x)
		continue;
		if(x>=2*a)
		x+=a;
		if(x>a&&x<2*a)
		{
			if(a%2==0)
			x+=(a/2);
			else
			x+=((a-1)/2);
		}
	}
	printf("%ld",x);
 	return 0;
}

