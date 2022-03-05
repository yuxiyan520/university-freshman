#include <stdio.h>

int main()
{
	int n,i;
	char x[10000],z[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%c%c",&x[i],&z[i]);
	for(i=0;i<n;i++)
	{
		if(x[i]<z[i])
		break;
	}
	if(i!=n)
	printf("N0\n");
	else
	printf("YES!\n");
 	return 0;
}

