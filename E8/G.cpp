#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int k;
sand(const void *p1,const void *p2)
{
	int i;
	{
		for(i=0;i<=k;i++)
		{
			if(*(int *)(p1+i)==*(int *)(p2+i))
			continue;
			if(i==k)
			{
				if(*(int *)(p1+i)>*(int *)(p2+i)) return 1;
				if(*(int *)(p1+i)<*(int *)(p2+i)) return -1;
				return 0;
			}
			else if(i%2==0)
			{
				if(*(int *)(p1+i)>*(int *)(p2+i)) return 1;
				if(*(int *)(p1+i)<*(int *)(p2+i)) return -1;
				return 0;
			}
			else
			{
				if(*(int *)(p1+i)<*(int *)(p2+i)) return 1;
				if(*(int *)(p1+i)>*(int *)(p2+i)) return -1;
				return 0;
			}
		}
	}
}
void my(int (*pa)[11],int k,int n)
{
	qsort(pa,n,sizeof(pa[0]),sand); 
}


int main()
{
	int n,i,j,a[1001][11];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[i][j]);
		}
		a[i][k]=i+1;
	}
	my(a,k,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i][k]);
 	return 0;
}

