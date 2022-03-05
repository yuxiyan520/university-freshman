#include <stdio.h>
#include <math.h>
#include <string.h>
int n,m,a[100][100],i,j,b[100],sum,nu;
int main()
{
	scanf("%d %d\n",&n,&m);
	m--;
	while(m--)
	{
		scanf("%c %c\n",&i,&j);
		if(a[i][j]==0&&a[j][i]==0)
		{
			b[i]++;
			b[j]++;
		}
		a[i][j]=1;
		a[j][i]=1;
		
	}
	scanf("%c %c",&i,&j);
	if(a[i][j]==0&&a[j][i]==0)
		{
			b[i]++;
			b[j]++;
		}
	a[i][j]=1;
	a[j][i]=1;
	for(i=65;i<=90;i++)
	{
		sum=0;
		nu=0;
		for(j=65;j<=90;j++)
		{
			if(i=j)
			continue;
			else
			{
				if(a[i][j]==1)
				{
					sum+=b[j];
					nu++;
				}
			}
		}
		sum/=nu;
		if(b[i]<sum)
		{
			printf("%c ",i);
		}		
	}
 	return 0;
}

