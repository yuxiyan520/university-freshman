#include <stdio.h>

int main()
{
	int t,i,n,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int b[10000]={0};
		k=0;
		scanf("%d",&n);
		if(n==1)
		{
			printf("1\n");
			continue;
		}
		if(n==2)
		{
			printf("2\n");
			continue;
		}
		b[0]=n;
		for(n=n-2;n>0;n-=2)
		{
			for(j=0;b[j]!=0||j<k;j++)
				b[j]*=n;
			for(j=0;b[j]!=0 || j<k;j++)
			{
				if(b[j]>10)
				{
					b[j+1]+=(b[j]/10);
					b[j]%=10;
				}
			}
			k=j;			
		}
		for(j--;j>=0;j--)
		printf("%d",b[j]);      
		printf("\n");
	}
 	return 0;
}

