#include <stdio.h>

int main()
{
	int n,m[50]={0},i,sz=0,j;
	double p[50]={0.0},q[50]={0.0},zc,c[50]={0.0},max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%4d",&m[i]);
		scanf("%lf",&p[i]);
		scanf("%lf",&q[i]);
	}
	for(i=0;p[i]!=0;i++)
		sz++;	
	for(i=0,zc=0;i<sz;i++)
		zc=p[i]*q[i]+zc;
	for(i=0;i<sz;i++)
	c[i]=p[i]*q[i];
	for(i=sz-1;i>=0;i--)
	{
		if(c[i]>max)
		{
			max=c[i];
			j=i;
		}
	}
	if(max/zc<=1e-5)
	printf("ERROR!");
	if(zc==0)
	printf("ERROR!");
	else
	printf("%04d %.4lf",m[j],max/zc);
	return 0;
}

