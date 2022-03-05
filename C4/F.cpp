#include <stdio.h>

int main()
{
	int t,n,k,x[1020],y[1020],i,l;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%d",&n);
		for(i=1,l=0;i<=n;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
			if(i>=2&&x[i]==x[i-1]&&y[i]!=y[i-1])
			l=1;			
		 } 
		if(l!=1)
		printf("Case #%d: Through the star sea.\n",k);	
		else
		printf("Case #%d: Stop somewhere.\n",k);	
	}
 	return 0;
}

