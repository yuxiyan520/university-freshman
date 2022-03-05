#include <stdio.h>
#include <math.h>
#include <string.h>
long long f(int n)
{
	int a[100005]={0},i;
	long long b[200005]={0};
	long long add=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b[(a[i]-i)+100000]++;
	}
	for(i=0;i<=200000;i++)
	{
		if(b[i]!=0)
		add+=b[i]*(b[i]-1)/2;
	}
	return add;
}
int main()
{
	int t,n;
	long long m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		m=f(n);
		printf("%lld\n",m);
	}
 	return 0;
}

