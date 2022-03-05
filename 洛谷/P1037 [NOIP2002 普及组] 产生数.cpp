#include <stdio.h>
#include <math.h>
#include <string.h>
int k,a[15],b[15],c[10][10]={0},ar[35],sum=1;
char arr[35];
void dfs(int m)
{
	if(m>=k)
	{
		
		return;
	}
	for(int i=0;i<k;i++)
	{
		if()
	}
}
int main()
{
	scanf("%s",&arr);
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		c[(a[i])][(b[i])]++;
	}
	dfs(0);
	for(int i=0;i<strlen(arr);i++)
	{
		ar[i]=arr[i]-'0';
		sum*=(c[(ar[i])]+1);
	}
	printf("%d",sum);
 	return 0;
}

