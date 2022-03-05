#include <stdio.h>
int a[1010];
int f(int,int);
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("%d\n",f(1,n));
	 } 
 	return 0;
}
int f(int j,int k)
{
	int mid,b,c;
	if(j==k)
		return a[j];
	else
	{
		int mid=j+(k-j+1)/2;
		int c=f(j,mid-1);
		int b=f(mid,k);
		return (c+b)&(c-b);
	}
}
