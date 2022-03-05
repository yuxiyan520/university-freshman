#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	double a,b;
	int i;
	scanf("%lf",&a);
	while((scanf("%d%lf",&i,&b))!=EOF)
	{
		if(i==0)
		a=a+b;
		else
		{
			a=(int)(((a*b*100/(a+b)))+0.5);
			a=(double)a/100;
		}
	}
	printf("%.2lf",a);
 	return 0;
}

