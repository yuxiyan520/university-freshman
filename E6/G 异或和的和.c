#include <stdio.h>
#include <math.h>
#include <string.h>
void er(int);
int n,l,a[35],i,j,q=0,q0;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&l);
		er(l);
	}
	for(j=1;j<=32;j++)
	{
		q+=pow(2,32-j)*(a[j]%2);
	}
	printf("%d",q);
 	return 0;
}

void er(int n)
{
	int j;
	for(j=32;j>=1;j--)
	{
		a[j]+=n&1;
		n>>=1;
	}
}
