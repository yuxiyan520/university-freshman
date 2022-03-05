#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	unsigned long long n,n2,n3,n4;
	int m;
	while((scanf("%llu%d",&n,&m))!=EOF)
	{
		if(m!=31)
		{
			n2=(n>>2*(m+1))<<2*(m+1);
			n3=(((1<<(m+1))-1)&n)<<(m+1);
			n4=(n>>(m+1))&((1<<(m+1))-1);
			n=n2+n3+n4;	
		}
		else
		{
			n2=n>>32;
			n3=n<<32;
			n=n2+n3;
		}
		printf("%llu\n",n);
	}
 	return 0;
}

