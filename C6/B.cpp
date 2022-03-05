#include <stdio.h>
#include <string.h>
void bubbleSort(int [], int );
int main()
{
	int n,k,shu[2005],q,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&shu[i]);
	bubbleSort(shu,n);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&q);
		printf("%d\n",shu[n-q]);
	}
 	return 0;
}

void bubbleSort(int a[], int n)
{
int i, j, hold, flag;
for (i = 0; i < n-1; i++)
{
flag = 0;
for (j = 0; j < n-1-i; j++)
{
if (a[j] > a[j + 1])
{
hold = a[j];
a[j] = a[j + 1];
a[j + 1] = hold;
flag = 1;
}
}
if (0 == flag)
break;
}
}

