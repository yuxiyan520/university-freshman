#include <stdio.h>
int x[10000000],h[10000000];
double g[10000000];
double gpa(int);
int main()
{
	int n,i,hzong=0;
	double zong=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&x[i],&h[i]);
		g[i]=gpa(x[i])*h[i];
		zong+=g[i];
		hzong+=h[i];
	}
	printf("%.2lf",zong/hzong);
 	return 0;
}
double gpa(int a)
{
	if(a==60)
	return 1;
	if(a<60)
	return 0;
	
	return 0.0+4-(1.0*3*(100-a)*(100-a)/1600);
}

