#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a[102],n,i;
	scanf("%d",&n);
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&a[i]);
	}
	printf("a[]={");
	for(i=0;i<=n-2;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d};\n",a[n-1]);
 	return 0;
}

