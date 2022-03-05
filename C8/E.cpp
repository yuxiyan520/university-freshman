#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int rise_int(const int *p1, const int *p2)
	{
		if (p1[0]< p2[0] ) return -1;
		if (p1[0] > p2[0] ) return 1;
		return 0;
	}
int main()
{
	int t,a[1005][3],i,n,lnum;
	char m;
	scanf("%d",&t);
	while(t--)
	{
		lnum=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i][0]);
		}
		for(i=1;i<=n;i++)
		{
			scanf("%c",&m);
			if(m=='R')
			a[i][1]=1;
			else
			{
				a[i][1]=2;
				lnum++;
			}
		}
		qsort(a,n, sizeof(int), rise_int);
		for(i=1;i<=lnum;i++)
		{
			if(a[i][1]==1)
			break;
		}
		if(i==lnum+1)
		printf("YES\n");
		else
		printf("NO\n");
	}
 	return 0;
}

