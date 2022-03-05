#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int month,m[13],i,sheng=0,cun=0,flag=0,swag;
	for(i=1;i<=12;i++)
	scanf("%d",&m[i]);
	for(i=1;i<=12;i++)
	{
		if(i==1)
		{
			if(m[1]>300)
			{
				printf("-1");
				flag=1;
				break;
			}
			else
			{
				swag=((300-m[1])/100)*100;
				cun+=swag;
				sheng=300-m[1]-swag;
			}
		}
		else
		{
			if(sheng+300<m[i])
			{
				printf("-%d",i);
				flag=1;
				break;
			}
			else
			{
				swag=((sheng+300-m[i])/100)*100;
				cun+=swag;
				sheng=(sheng+300-m[i])%100;
			}
		}
	}
	if(flag!=1)
	{
		printf("%d",sheng+cun/5*6);
	}
 	return 0;
}

