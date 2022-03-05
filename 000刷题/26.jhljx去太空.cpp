#include <stdio.h>
#include <math.h>
#include <string.h>
int ju(int,int,int,int,int,int);
int ci(int,int);
int main()
{
	int x0,y0,z0,x[101],y[101],z[101],n,i,max,k,nn;
	double mm;
	while((scanf("%d%d%d",&x0,&y0,&z0))!=EOF)
	{
		max=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d%d%d",&x[i],&y[i],&z[i]);
			
		 } 
		for(i=n;i>=1;i--)
		{
			if((ju(x0,y0,z0,x[i],y[i],z[i]))>=max)
			{
				nn=i;
				max=ju(x0,y0,z0,x[i],y[i],z[i]);
			}
		}
		scanf("%d",&k);
		printf("%d ",nn);
		mm=sqrt(max*1.0)*2*k*1.0;
		printf("%.6lf\n",mm);
	}
	
 	return 0;
}

int ju(int a,int b,int c,int x,int y,int z)
{
	return ci(a,x)+ci(b,y)+ci(c,z);
}

int ci(int m,int n)
{
	return (m-n)*(m-n);
}
