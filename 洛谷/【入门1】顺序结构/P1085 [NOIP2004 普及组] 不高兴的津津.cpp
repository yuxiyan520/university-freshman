#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a,b,i=1,flag=0,m=0;
	while(i<=7)
	{
		scanf("%d%d",&a,&b);
		if(a+b>8&&a+b-8>flag)
		{
			flag=a+b-8;
			m=i;
		}
		i++;
	}
	printf("%d",m);
 	return 0;
}

