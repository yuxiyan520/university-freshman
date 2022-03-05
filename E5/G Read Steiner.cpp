#include <stdio.h>
int n,a,b,c,m[20],i;
long long f(int,int);
int er(int);
int main()
{
	scanf("%d%d%d%d",&n,&a,&b,&c);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("%lld",f(1,n));
 	return 0;
}

long long f(int p,int n)
{
	int q;
	if(p==n)
	{
		q=0;
		if(er(m[p])/100==1)
		q+=a;
		if((er(m[p])/10)%10==1)
		q+=b;
		if(er(m[p])%10==1)
		q+=c;
		return q;
	}
	else
	{
		q=er(m[p])/100+(er(m[p])/10)%10+er(m[p])%10;
		return q*f(p+1,n)%1000000007;
	}
}

int er(int n)
{
	int i,a[5];
	for(i=3;i>=1;i--)
	{
		a[i]=n&1;
		n>>=1;
	}
	return a[1]*100+a[2]*10+a[3];
}

