#include <stdio.h>
#include <math.h>
int x[3],y[3],i;
double chang(int,int,int,int);//��֪�������꣬���������� 
int main()
{
	for(i=1;i<=2;i++)
	{
		scanf("%d",&x[i],&y[i]);
	}
	printf("%lf",chang(x[1],y[1],x[2],y[2]));
 	return 0;
}

double chang(int x1,int y1,int x2,int y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
