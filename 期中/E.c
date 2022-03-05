#include <stdio.h>
#include <math.h>
#include <string.h>
void px_s(double [],int [],int);
void px_s2(int [],int,int);
int n,a0[305],i,qi,mo,k;
double b0[305];
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%lf",&a0[i],&b0[i]);
	}
	px_s(b0,a0,n);
	for(i=1;i<=n;i++)
	{
		if((b0[i]-b0[i+1])<=1e-15)
		{
			qi=i;
			while(b0[i]==b0[i+1]&&i+1<=n)
			{
				i++;
			}
			mo=i;
			px_s2(a0,qi,mo);
			for(k=qi;k<=mo;k++)
			{
				printf("%08d %.2lf\n",a0[k],b0[k]);
			}
		}
		else
		{
			printf("%08d %.2lf\n",a0[i],b0[i]);
		}
	}
 	return 0;
}

void px_s(double m[],int n[],int N) 
{
	int i,j,flag,swag0;
	double swag;
	for(i=1;i<N;i++)
	{
		flag=0;
		for(j=0;j<N-i+1;j++)
		{
			if(m[j]>m[j+1])
			{
				swag=m[j+1];
				m[j+1]=m[j];
				m[j]=swag;
				swag0=n[j+1];
				n[j+1]=n[j];
				n[j]=swag0;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}

void px_s2(int m[],int qi,int mo) 
{
	int i,j,swag,flag;
	for(i=qi;i<=mo;i++)
	{
		flag=0;
		for(j=qi;j<mo-i+1;j++)
		{
			if(m[j]>m[j+1])
			{
				swag=m[j+1];
				m[j+1]=m[j];
				m[j]=swag;
			}
		}
		if(flag==0)
		break;
	}
}
