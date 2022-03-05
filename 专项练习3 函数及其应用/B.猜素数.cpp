#include <stdio.h>
#include <math.h>
int Sushu(int x)
{
	int i;
	if(x<=1)
	return 1;
	else
	{
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 1;
			break;
		}
	}
	if(i==sqrt(x)+1)
	return 0;
	}
}

int main()
{
	int n,m;
	while(scanf("%d",&n)!=EOF)
	{
		m=Sushu(n);
		if(m==0)
		printf("yes\n");
		else
		printf("no\n");
	}
 	return 0;
}

