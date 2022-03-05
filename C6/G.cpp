#include <stdio.h>
int n,m,a[500005],i,e;
int f1(int [],int,int,int);
int f2(int [],int,int,int);
int main()
{
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		scanf("%d",&e);
		printf("%d %d\n",f1(a,e,1,n),f2(a,e,1,n));
	}
 	return 0;
}

int f1(int b[],int key,int low,int high)
{
	int mid;
	while( low <= high )
	{
		mid = (low + high)/2;
		if( key == b[mid] )
		return mid;
		else if (key < b[mid])
		high = mid-1;
		else
		low = mid+1;
	}
	
	if(b[high-1]>=key)
	return high-1;
	else if(b[high]>=key)
	return high;
	else if(b[low]>=key)
	return low;
	else if(b[low+1]>=key)
	return low+1;
	else 
	return -1;
	}

int f2(int b[],int key,int low,int high)
{
	int mid;
	while( low <= high )
	{
		mid = (low + high)/2;
		if( key == b[mid] )
		{
			while(1)
			{
				if(b[mid]>key)
				return mid;
				mid++;
			}
		}
		else if (key < b[mid])
		high = mid-1;
		else
		low = mid+1;
	}
	if(b[high-1]>key)
	return high-1;
	else if(b[high]>key)
	return high;
	else if(b[low]>key)
	return low;
	else if(b[low+1]>key)
	return low+1;
	else 
	return -1;
	}
