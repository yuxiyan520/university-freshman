#include <stdio.h>
int main()
{
	int a,b,c,n,i;
	while(scanf("%d%d%d",&a,&b,&c)!= EOF) 
	{
		printf("%d\n",a*(c+1)+(c*(c+1)*b)/2);
	}
 	return 0;
}

