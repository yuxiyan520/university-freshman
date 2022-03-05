#include <stdio.h>
long long a,b,c,d,m,n,l;
long long zuida(long long,long long);
long long zuixiao(long long,long long);
int main()
{
	while((scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d))!=EOF)
	{
		m=zuida(a,b);
		a/=m;
		b/=m;
		m=zuida(c,d);
		c/=m;
		d/=m;
		n=zuixiao(b,d);
		m=a*(n/b)+c*(n/d);
		l=zuida(m,n);
		n/=l;
		m/=l;
		if(n<0)
		printf("%lld/%lld\n",-m,-n);
		else
		printf("%lld/%lld\n",m,n);
	}
 	return 0;
}
long long zuida(long long x,long long y)
{
	if(x<0)
	x*=(-1);
	if(y==0)
	return x;
	
	return zuida(y,x%y);
}
long long zuixiao(long long a,long long b)
{
	int q=zuida(a,b);
	return a*b/q;
}
