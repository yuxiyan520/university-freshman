#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,i,n3[100000];
	while((scanf("%d",&n))!=EOF)
	{
		memset(n3,0,sizeof(n3));
		if(n==0)
		printf("0\n");
		else
		{
			for(i=0;n!=0;i++)
			{
				n3[i]=n%3;
				n/=3;
			}
			i--;
			if(i>=4)
			{
				printf("LONG");
				for(i;i>=0;i--)
				{
					printf("%d",n3[i]);
				}
				printf("\n");
			}
			else
			{
				for(i;i>=0;i--)
				{
					printf("%d",n3[i]);
				}
				printf("\n");
			}
		 } 
		
	 } 
 	return 0;
}

