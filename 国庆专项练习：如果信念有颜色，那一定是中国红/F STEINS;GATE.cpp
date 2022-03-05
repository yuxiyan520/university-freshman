#include <stdio.h>

int main()
{
	int t,n,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		if(n==0||n==1)
			printf("-1\n");
		else if(n%2==0)
			{
				for(k=0;k<n/2;k++)
			printf("1");
			printf("\n");
			}
		else
		{
			printf("7");
			for(k=0;k<(n-3)/2;k++)
			printf("1");
			printf("\n");
		}
	 } 
 	return 0;
}

