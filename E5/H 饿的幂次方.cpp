#include <stdio.h>
#include <math.h> 
int f(int);
int n;

int main()
{
	scanf("%d",&n);
	if(n==0)
	printf("0");
	else
	{
		f(n);
	}
 	return 0;
}

int f(int m)
{
	int i=0,l=m;
	if(m==0)
	return 0;
	while((m/2)!=0)
	{
		m/=2;
		i++;
	}
	if(i==0)
	{
		printf("2(0)");
		return 0;
	}
	else
	{
		printf("2(");
		f(i);
		printf(")");
		if((l-pow(2,i))!=0)
		printf("+");		
		return f(l-pow(2,i));
	}
}
