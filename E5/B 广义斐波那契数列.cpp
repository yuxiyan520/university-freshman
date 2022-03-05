#include <stdio.h>
long long f(int);
int n,p,q,a,b,c;
int main()
{
	scanf("%d%d%d%d%d%d",&n,&p,&q,&a,&b,&c);
	printf("%lld",f(n));
 	return 0;
}

long long f(int i)
{
	if(i==1)
	return p;
	else if(i==2)
	return q;
	else
	return a*f(i-1)+b*f(i-2)+c;
}
