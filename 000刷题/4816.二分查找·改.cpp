#include <stdio.h>
int lower_bound(int [],int,int,int);
int upper_bound(int [],int,int,int);
int n,m,a[500010],i,j,key;
int main()
{
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(m--)
	{
		scanf("%d",&key);
		printf("%d ",lower_bound(a,key,1,n));
		printf("%d\n",upper_bound(a,key,1,n));
	}
 	return 0;
}

int lower_bound(int b[],int key0,int qi,int mo)
{
	int mid=(qi+mo)/2;
	if(mid==0&&a[1]>=key0)
	return 1;
	if(mid==0&&a[1]<key0)
	return -1;
	if(qi>mo)
	{
		if(a[mo]>=key0)
		return mo;
		if(a[qi]>=key0)
		return qi;
		else
		return -1;
	}
	if(a[mid]>=key0)
	return lower_bound(b,key0,qi,mid-1);
	if(a[mid]<key0)
	return lower_bound(b,key0,mid+1,mo);
}

int upper_bound(int b[],int key0,int qi,int mo)
{
	int mid=(qi+mo)/2;
	if(mid==0&&a[1]>key0)
	return 1;
	if(mid==0&&a[1]<=key0)
	return -1;
	if(qi>mo)
	{
		if(a[mo]>key0)
		return mo;
		if(a[qi]>key0)
		return qi;
		else
		return -1;
	}
	if(a[mid]>key0)
	return upper_bound(b,key0,qi,mid-1);
	if(a[mid]<=key0)
	return upper_bound(b,key0,mid+1,mo);
}
