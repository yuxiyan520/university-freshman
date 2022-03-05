#include <stdio.h>
#include <math.h>
int main()
{
	double n,nx;
	int nz,z[35]={0},i;
	scanf("%lf",&n);
	nz=n/1;
	nx=n-nz;
	if(nz==0)
	{
		printf("0"); 
	}
	else
	{
		for(i=1;nz!=1;i++)
		{
			z[i]=nz%2;
			nz/=2;
		}
		z[i]=1;
		for(i;i>=1;i--)
		{
			printf("%d",z[i]);
		}
	}
	printf(".");
	if(nx-0<1e-15)
	{
		for(i=0;i<10;i++)
			printf("0");
	}
	else 
	for(i=0;i<10;i++)
	{
		nx*=2;
		printf("%d",(int)nx/1);
		nx-=(int)nx/1;
	}
 	return 0;
}

