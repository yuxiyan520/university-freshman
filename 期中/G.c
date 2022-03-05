#include <stdio.h>
#include <math.h>
#include <string.h>
int t,n,l,f,i,j,sum,a[12],num;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&l,&f);
		sum=0;
		for(j=0;j<n;j++)
		{
			a[j]=l;
		}
		while(1)
		{
			num=0;
			for(i=0;i<n;i++)
			{
				num+=a[i];
			}
			if(num%3==0)
			{
				sum++;
			}
			for(i=n-1;i>=0;i--)
			{
				if(i==0&&a[0]==f)
				{
					a[0]++;
				}
				else if(i==0&&a[0]<f)
				{
					a[0]++;
					for(j=1;j<n;j++)
					{
						a[j]=l;
					}
				}
				else if(a[i]<f)
				{
					a[i]++;
					break;
				}
			}
			if(a[0]>f)
			{
				break;
			}
		}
		printf("%d\n",sum);
	}
 	return 0;
}
