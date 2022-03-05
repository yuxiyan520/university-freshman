#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(b<=d)
	{
		e=c-a;
		f=d-b;
	}
	else
	{
		e=c-a-1;
		f=d+60-b;
	}
	printf("%d %d",e,f);
 	return 0;
}

