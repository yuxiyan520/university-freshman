#include <stdio.h>
#include <math.h>

int main()
{
	double zhong=1,x,sum=0;
	int shang=1;
	long long xia=1;
	int m,i;
	scanf("%lf",&x);
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		sum+=zhong/xia*shang;
		shang*=(-1);
		zhong*=x*x;
		xia*=(2*i)*(2*i-1);	
	}
	printf("%.8lf",sum);
}

