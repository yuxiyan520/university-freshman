#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a[11]={0},i,n,j;
	j=1;
	a[j]=1;
	for(i=2;i<=1000;i++)
	{
		j+=i;
		if(j%10==0)
		j=10;
		else
		j%=10;
		a[j]=1;
	}
	for(i=1;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
 	return 0;
}

