#include <stdio.h>
int a[35];
int er(int);//十进制转二进制 
int main()
{
	int m;
	scanf("%d",&m);
	er(m);
 	return 0;
}

int er(int n)
{
	int i;
	for(i=16;i>=1;i--)
	{
		a[i]=n&1;
		n>>=1;
	}
	i=1;
	while(a[i]==0)
		i++;
	for(i;i<=16;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
