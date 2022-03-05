#include <stdio.h>

int main()
{
	int n,i,j;
	unsigned long long int c,a0,b0,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%llu%llu",&a,&b);
		if(b>a)
		{
			j=a;
			a=b;
			b=j;
		}
		a0=a;
		b0=b;
		while(a%b!=0)
		{
			j=a%b;
			a=b;
			b=j;
		}
		j=b;
		c=a0/b;
		c*=b0;
		printf("%llu\n",c);
	}
 	return 0;
}

