#include <stdio.h>

int main()
{
	int n,a,b,c,i,m,time;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(b<=c)
		{
			printf("fail\n");
		}
		else
		{
			m=0;
			time=0;
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

