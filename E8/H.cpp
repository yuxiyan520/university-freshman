#include <stdio.h>
#include <math.h>
#include <string.h>
int a[1000001];
void f(int *pa,long long *pxf,long long *pgg,int n)
{
	int low=1,high=n,i;
	while(low<high)
	{
		if(pa[low]<pa[high])
		{
			*pxf+=pa[high];
			high--;
		}
		else if(pa[low]>pa[high])
		{
			*pxf+=pa[low];
			low++;
		}
		else
		{
			i=1;
			while(pa[low+i]==pa[high-i])
			{
				i++;
			}
			if(i%2==1)
			{
				if(pa[low+i]>pa[high-i])
				{
					*pxf+=pa[high];
					high--;
				}
				else
				{
					*pxf+=pa[low];
					low++;
				}
			}
			else
			{
				if(pa[low+i]<pa[high-i])
				{
					*pxf+=pa[high];
					high--;
				}
				else
				{
					*pxf+=pa[low];
					low++;
				}
			}
		}
		if(low==high)
		{
			*pgg+=pa[low];
		}
		else
		{
			if(pa[low]<pa[high])
			{
				*pgg+=pa[high];
				high--;
			}
			else if(pa[low]>pa[high])
			{
				*pgg+=pa[low];
				low++;
			}
			else
			{
				i=1;
				while(pa[low+i]==pa[high-i])
				{
					i++;
				}
				if(i%2==1)
				{
					if(pa[low+i]>pa[high-i])
					{
						*pgg+=pa[high];
						high--;
					}
					else
					{
						*pgg+=pa[low];
						low++;
					}
				}
				else
				{
					if(pa[low+i]<pa[high-i])
					{
						*pgg+=pa[high];
						high--;
					}
					else
					{
						*pgg+=pa[low];
						low++;
					}
				}
			}
		}
	}
}
int main()
{
	int i,j,n;
	long long xf=0,gg=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	f(a,&xf,&gg,n);
	if(xf>gg)
	printf("Ye$");
	else
	printf("N0");
 	return 0;
}

