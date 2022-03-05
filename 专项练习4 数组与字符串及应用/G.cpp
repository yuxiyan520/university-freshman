#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,m,i,j,a[100005],b[100005];
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&b[i]);
	}
	if(n>=m)
	{
		for(i=1,j=1;j<=m,i<=n;)
		{
			if(a[i]==b[j])
			{
				i++;
				j++;
			}
			else
			{
				i++;
			}
		}
		if(j>m)
		printf("TAK");
		else
		printf("NIE");
	}
	else
	{
		printf("NIE");
	}
 	return 0;
}

