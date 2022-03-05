#include <stdio.h>
#include <math.h>
#include <string.h>
void Printf(int n)
{	
	if(n>=10)
	Printf(n/10);
	
	printf("%d ",n%10);
}

int main()
{
	int num;
	scanf("%d",&num);
	Printf(num);
 	return 0;
}

