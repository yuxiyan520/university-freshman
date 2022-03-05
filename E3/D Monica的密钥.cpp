#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,i,m[40];
	unsigned long long int n,q;
	scanf("%d%d",&a,&b);
	for(i=1;i<=32;i++)
	{
		m[i]=(b&1)*pow(2,i-1);
		b/=2;
	}
	for(i=1,n=1;i<=32;i++)
	{
		if(m[i]!=0)
		{
			n*=(unsigned long long int)pow(a,m[i]);
			n%=998244353;
		}
	}
	for(i=1;i<=32;i++)
	{
		m[i]=(n&1)*pow(2,i-1);
		n/=2;
	}
	for(i=1,q=1;i<=32;i++)
	{
		if(m[i]!=0)
		{
			q*=(unsigned long long int)pow(n,m[i]);
				q%=998244353;
		}
	}
	printf("%d",q);
 	return 0;
}

