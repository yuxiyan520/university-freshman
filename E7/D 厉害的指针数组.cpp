#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,m,l1,l2,i;
	char a[105][105],*pa[102],*pb=a[104];
	for(i=1;i<=102;i++)
	{
		pa[i]=a[i];
	}
	scanf("%d%d ",&n,&m);
	for(int i=1;i<=n;i++) 
	gets(a[i]); 
	while(m--)
	{
		scanf("%d%d",&l1,&l2);
		pb=pa[l1];
		pa[l1]=pa[l2];
		pa[l2]=pb;
	}
	for(i=1;i<=n;i++)
	{
		printf("%s\n",pa[i]);
	}
 	return 0;
}

