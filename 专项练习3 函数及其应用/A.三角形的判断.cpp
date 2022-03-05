#include <stdio.h>

int San(int a,int b,int c)//判断三角形及其形状的函数 
{
	if(a+b<=c || a+c<=b || b+c<=a)
	return 0;
	else
	{
		if(a==b && b==c)
		return 4;
		else if(a==b || b==c || a==c)
		return 3;
		else
		return 2;
	}
}

int main()
{
	int n,a,b,c,san;
	scanf("%d%d%d",&a,&b,&c);
	san=San(a,b,c);
	if(san==0)
	printf("not a triangle!\n");
	if(san==2)
	printf("regular triangle!\n");
	if(san==3)
	printf("isosceles triangle!\n");
	if(san==4)
	printf("equilateral triangle!\n");
 	return 0;
}

