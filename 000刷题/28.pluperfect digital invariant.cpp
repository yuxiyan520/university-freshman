#include <stdio.h>
#include <math.h>
#include <string.h>
int ci(int);
int main()
{
	int t,l,f,i,k,flag,bai,shi,ge;
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		scanf("%d%d",&l,&f);;
		for(i=l;i<=f;i++)
		{
			bai=i/100;
			ge=i%10;
			shi=(i%100)/10;
			if(ci(bai)+ci(shi)+ci(ge)==i)
			{
				flag=1;
				printf("%d ",i);
			}
		}
		if(flag==0)
		{
			printf("-1\n");
		}
		else
		{
			printf("\n");
		}
	}
 	return 0;
}

int ci(int p)
{
	return p*p*p;
}
