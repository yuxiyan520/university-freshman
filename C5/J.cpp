#include <stdio.h>
int qpow(int,int,int);
int main()
{
	int a,b,p,m;
	scanf("%d%d%d",&a,&b,&p);
	m=qpow(a,b,p);
	printf("%d",m);
 	return 0;
}
int qpow(int a,int b,int p)
{
int ret=1;
while(b)
{
if(b&1) ret=1ll*ret*a%p;
a=1ll*a*a%p,b>>=1;
}
return ret;
}

