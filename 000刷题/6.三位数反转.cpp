#include <stdio.h>

int main()
{
	int n;
	while((scanf("%d",&n))!=EOF)
	{
		
		if(n%100==0)
		printf("%d\n",n/100);
		else if(n%10==0)
		printf("%d%d\n",(n%100)/10,n/100);
		else
		printf("%d%d%d\n",n%10,(n%100)/10,n/100);
	}
 	return 0;
}

