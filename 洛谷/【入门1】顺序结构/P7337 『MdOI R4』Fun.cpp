#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,m,type,t[105],q[105],i,happy=0;
	scanf("%d%d%d",&n,&m,&type);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t[i]);
	 } 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&q[i]);
		if(t[i]+q[i]==2)
		{
			happy++;
		}
	 } 
	if(happy>=m)
	{
		printf("%d",n-happy+m);
	}
	else
	printf("%d",n);
 	return 0;
}

