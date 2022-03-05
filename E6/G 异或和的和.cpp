#include <stdio.h>
#include <math.h>
#include <string.h>
void er(int [][35],int,int);
int n,l,a[1000005][35],i,j,q=0,q0;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&l);
		er(a,l,i);
	}
	for(j=1;j<=32;j++)
	{
		q0=0;
		for(i=1;i<=n;i++)
		{
			q0+=a[i][j];
		}
		q+=pow(2,32-j)*(q0%2);
	}
	printf("%d",q);
 	return 0;
}

void er(int [][35],int n,int i0)
{
	int j;
	for(j=32;j>=1;j--)
	{
		a[i0][j]=n&1;
		n>>=1;
	}
}
