#include <stdio.h>
#include <math.h>
#include <string.h>
int f(int);
int k,i;
int main()
{
	scanf("%d",&k);
	printf("%d\n",k);
	for(i=1;i<=99&&f(k)!=1;i++)
	{
		k=f(k);
		printf("%d\n",k);
	}
	if(i<=99)
	printf("1\n");
 	return 0;
}

int f(int n)
{
	if(k%2==1)
	return 3*n+1;
	else
	return k/2;
}
