#include <stdio.h>
long long n,m;
long long G(long long,long long);
int main()
{
	while((scanf("%lld%lld",&n,&m))!=EOF)
	{
		printf("%lld\n",G(n,m));
	}
 	return 0;
}

long long G(long long n,long long m)
{
	if(m==0)
	return 1;
	else if(m==1)
	return n;
	else if(n==m)
	return 1;
	if(n<=13&&m<=13)
	{
		return (G(n-1,m)+G(n-1,m-1))%13;
	}
	else
	{
		return (G(n%13,m%13)*G(n/13,m/13))%13;		
	}
}
