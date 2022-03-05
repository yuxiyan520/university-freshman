#include <stdio.h>
#include <math.h>
int x[5],y[5],i,t;
double zhouchang(int,int,int,int,int,int);//已知三点坐标，求三角形的周长
double mianji(int,int,int,int,int,int);//已知三点坐标，求三角形的面积 
double chang(int,int,int,int);//已知两点坐标，求两点间距离 
double cos_c(double,double,double);//算cos c
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		for(i=1;i<=3;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
		}
		printf("%.3lf ",zhouchang(x[1],y[1],x[2],y[2],x[3],y[3]));
		printf("%.3lf\n",mianji(x[1],y[1],x[2],y[2],x[3],y[3]));
	}
 	return 0;
}

double chang(int x1,int y1,int x2,int y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

double zhouchang(int x1,int y1,int x2,int y2,int x3,int y3)
{
	return chang(x1,y1,x2,y2)+chang(x1,y1,x3,y3)+chang(x2,y2,x3,y3);
}

double mianji(int x1,int y1,int x2,int y2,int x3,int y3)
{
	double a=chang(x1,y1,x2,y2),b=chang(x1,y1,x3,y3),c=chang(x2,y2,x3,y3);
	double cos=cos_c(a,b,c);
	double sin=sqrt(1-cos*cos);
	return (a*b*sin)/2;
}

double cos_c(double a,double b,double c)
{
	return (a*a+b*b-c*c)/(2*a*b);
}
