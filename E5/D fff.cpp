#include <stdio.h>
long long  n;
long long f(long long);
int main()
{
	while((scanf("%lld",&n))!=EOF)
	{
		n=f(n);
		n=f(n);
		n=f(n);
		printf("%lld\n",n);
	}
 	return 0;
}

long long f(long long m)
{
	int i;
	long long l=0;
	for(i=0;i<64;i++,m/=2)
	{
		if(m%2==1)
		l++;
	 } 
	return l;
}
