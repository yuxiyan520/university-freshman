#include <stdio.h>
#include <math.h>
double dis(double,double,double,double,double,double);
int main()
{
	double m[15];
	int i;
	for(i=1;i<=12;i++)
	{
		scanf("%lf",&m[i]);
	}
	printf("%.2lf\n",dis(m[4],m[5],m[6],m[10],m[11],m[12]));
	printf("%.2lf\n",dis(m[1],m[2],m[3],m[7],m[8],m[9]));
	printf("%.2lf\n",dis(m[4],m[5],m[6],m[7],m[8],m[9]));
	printf("%.2lf\n",dis(m[7],m[8],m[9],m[10],m[11],m[12]));
	printf("%.2lf\n",dis(m[1],m[2],m[3],m[4],m[5],m[6]));
	printf("%.2lf\n",dis(m[1],m[2],m[3],m[10],m[11],m[12]));
 	return 0;
}
double dis(double x1,double y1,double z1,double x2,double y2,double z2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
}
