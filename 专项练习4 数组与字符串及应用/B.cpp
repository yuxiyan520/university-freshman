#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int bao[105]={0},miao,cai[1005]={0},zong,m,i=0,sum=0;
	scanf("%d%d",&zong,&miao);
	while(miao--)
	{
		scanf("%d",&m);
		if(cai[m]!=1)
		{
			if(i<zong)
			{
				cai[(bao[i])]=0;
				bao[i]=m;
				cai[m]=1;
				i++;
				sum++;
			}
			else
			{
				i=0;
				cai[(bao[i])]=0;
				bao[i]=m;
				cai[m]=1;
				i++;
				sum++;
			}
		}
		else
		{
			continue;
		}
	}
	printf("%d",sum);
 	return 0;
}

