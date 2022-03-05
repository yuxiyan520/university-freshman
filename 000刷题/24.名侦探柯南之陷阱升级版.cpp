#include <stdio.h>

int main()
{
	int n,a,b,c,d,time,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b<=c)
		{
			printf("fail\n");
		}
		else
		{
			m=0;
			time=0;
			for(j=1;d*j<a;j++)
			{
				while(a-m>b&&m+b<d*j)
				{
					m+=b-c;
					time++;
				}
				if(m+b-c<=d*j)
				{
					m=d;
					time++;
				}
				else
				{
					m+=b-c;
					time++;
				}
			}
			while(a-m>b)
			{
				time++;
				m+=b-c;
				}	
			time++;
			printf("%d\n",time);	
		}
	}
 	return 0;
}

