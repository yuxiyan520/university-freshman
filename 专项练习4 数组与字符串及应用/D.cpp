#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,a[100005],b[8],i,j,flag=1;
	while((scanf("%d",&n))!=EOF)
	{
		flag=1;
		memset(b,0,sizeof(b));
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		for(j=1;j<=n;j++)
		{
			i=a[j];
			if(i==1)
			{
				b[1]++;
			}
			if(i==2)
			{
				if(b[1]!=0)
				{
					b[1]--;
					b[2]++;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(i==5)
			{
				if(b[2]>=2)
				{
					b[2]-=2;
					b[5]++;
				}
				else if(b[1]>=2&&b[2]>=1)
				{
					b[1]-=2;
					b[2]--;
					b[5]++;
				}
				else if(b[1]>=4)
				{
					b[1]-=4;
					b[5]++;
				}
				else
				{
					flag=0;
					break;
				}
			}
		}
		if(flag)
		printf("Survived\n");
		else
		printf("Bankrupted\n");
	}
 	return 0;
}

