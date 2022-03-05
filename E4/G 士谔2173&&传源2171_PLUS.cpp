#include <stdio.h>

int main()
{
	int n,l,f,i,j,j0,m,m0,m1,m2,q,p,ci[20005]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&l,&f);
		for(j=l;j<=f;j++)
		{
			m=0;
			m1=0;
			m2=0;
			if(ci[j]!=0)
			continue;
			//算j中的2.1.7的和
			j0=j;
			for(j;j!=0;j/=10)
			{
				if(j%10==2||j%10==1||j%10==7)
				m++;
			}
			if(m==0)
			{
				j=j0;
				ci[j]++;
				continue;
			}
			else
			{
				m0=m;
				//算m1 
				for(m;m!=0;m/=2)
				{
					if(m%2==1)
					m1++;
				}
				//算m2
				q=0;				
				for(m=m0;m!=0;m/=10)
				{
					q+=m%10;
				}
				while(q>=10)
				{
					for(p=0;q!=0;q/=10)
					{
						p+=q%10;
					}
					q=p;
				}
				m2=q;
				if(m1==2||m1==1||m1==7||m2==2||m2==1||m2==7)
				{
					printf("%d ",j0);
				}
				j=j0;
				ci[j]++;
				continue;
			}			
		}
		printf("\n");
	}
 	return 0;
}

