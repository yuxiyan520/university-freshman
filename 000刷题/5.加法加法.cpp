#include <stdio.h>

int main()
{
	int a,c=0,i;
	long long b=0;
	while(scanf("%1d",&a)!=EOF)
	{
		b+=a;
		while(b>=10)
		{
			b-=10;
			c++;
		}
	}
	if(c==0)
	printf("%d",b);
	else if(c+b<10)
	printf("%d",c+b);
	else 
	{
		c=c+b;
		while(c>=10)
		{
			for(b=0;c>0;c/=10)
			{
				b+=c%10;
			}
			if(b>=10)
			c=b;
		}
		printf("%d",b);
	}
	return 0;
}


