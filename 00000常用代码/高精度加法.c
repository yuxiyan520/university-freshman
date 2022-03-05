#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 10
void ADD(int a[],int b[],int c[],int wei)
{
	int i;
	for(i=0;i<wei;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<wei;i++)
	{
		if(c[i]>=10)
		{
			c[i+1]+=(c[i]/10);
			c[i]%=10;
		}
	}
}

int main()
{
	int a[100000],b[100000],c[100000];
	int wei=N,i;
	ADD(a,b,c,wei);
 	return 0;
}

