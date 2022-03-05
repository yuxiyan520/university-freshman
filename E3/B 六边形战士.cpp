#include <stdio.h>

int main()
{
	int n,i,j,k[30],m,add;
	double nl;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		add=0;
		scanf("%d",&j);
		for(m=0;m<j;m++)
		{
			scanf("%d",&k[m]);
		}
		for(m=0;m<j-1;m++)
		{
			add+=(k[m]*k[m+1]);
		}
		add+=(k[0]*k[j-1]);
		nl=1.0*add/(10*10*j);
		printf("%.4lf\n",nl*100);
	}
 	return 0;
}

