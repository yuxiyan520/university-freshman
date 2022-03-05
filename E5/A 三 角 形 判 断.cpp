#include <stdio.h>
int san(int,int,int);//判断三角形是否成立 
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(san(a,b,c)==0)
	{
		printf("not a triangle!");
	}
	else
	{
		if(a==b&&b==c)
		printf("equilateral triangle!");
		else if(a==b||b==c||a==c)
		printf("isosceles triangle!");
		else
		printf("regular triangle!");
	}
 	return 0;
}

int san(int a,int b,int c)//能形成三角形返回1，否则返回0 
{
	if(a>=b&&a>=c)
	{
		if(a<b+c)
		return 1;
		else
		return 0;
	}
	else if(b>=a&&b>=c)
	{
		if(b<a+c)
		return 1;
		else
		return 0;
	}
	else if(c>=a&&c>=b)
	{
		if(c<a+b)
		return 1;
		else
		return 0;
	}
}
