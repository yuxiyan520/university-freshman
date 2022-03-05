#include <stdio.h>
int main()
{
	int n,a,b,c,i,j;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(b*b+c*c==a*a||a*a+c*c==b*b||a*a+b*b==c*c)
		{
			printf("Yes\n");
		 } 
		 else
		 {
		 	printf("No\n");
		 }
	}
 	return 0;
}

