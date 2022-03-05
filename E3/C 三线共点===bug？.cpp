#include <stdio.h>
int main()
{
	int n,a[10],b[10],c[10],i,k,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=1;k<=3;k++)
		{
			scanf("%d%d%d",&a[k],&b[k],&c[k]);
		}
		if(a[1]*b[2]==a[2]*b[1]&&a[1]*b[3]==a[3]*b[1]&&a[1]*c[2]==a[2]*c[1]&&a[1]*c[3]==a[3]*c[1]&&b[1]*c[2]==b[2]*c[1]&&b[1]*c[3]==b[3]*c[1])
			printf("Could be a bug!\n");
		else if(a[1]*b[2]==a[2]*b[1]&&a[1]*c[2]==a[2]*c[1]&&b[1]*c[2]==b[2]*c[1]&&a[1]*b[3]!=a[3]*b[1])			
			printf("Could be a bug!\n");
		else if(a[1]*b[3]==a[3]*b[1]&&a[1]*c[3]==a[3]*c[1]&&b[1]*c[3]==b[3]*c[1]&&a[1]*b[2]!=a[2]*b[1])
			printf("Could be a bug!\n");
		else if(a[2]*b[3]==a[3]*b[2]&&a[2]*c[3]==a[3]*c[2]&&b[2]*c[3]==b[3]*c[2]&&a[1]*b[2]!=a[2]*b[1])
			printf("Could be a bug!\n");
		else if((a[3]*b[1]*c[2]-a[3]*b[2]*c[1]+a[2]*b[3]*c[1]-a[1]*b[3]*c[2]+a[1]*b[2]*c[3]-a[2]*b[1]*c[3]==0)&&a[1]*b[2]!=a[2]*b[1]&&a[1]*b[3]!=a[3]*b[1]&&a[2]*b[3]!=a[3]*b[2])
			printf("Could be a bug!\n");
		else
			printf("A nice test data ~\n");
	}
 	return 0;
}
//		else if(a[1]*b[2]==a[2]*b[1]&&a[1]*b[3]==a[3]*b[1]&&(a[1]*c[3]==a[3]*c[1]||a[1]*c[2]==a[2]*c[1]||a[2]*c[3]==a[3]*c[2]))
//			printf("A nice test data ~\n");
