#include <stdio.h>
int san(int,int,int);//�ж��������Ƿ���� 
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",san(a,b,c));
 	return 0;
}

int san(int a,int b,int c)//���γ������η���1�����򷵻�0 
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
