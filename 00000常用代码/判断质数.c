#include <stdio.h>
#include <math.h>
#include <string.h>
int Iszhi(int a)//��������1������������0 
{
	int flag=1,i;
	if(a==1)
	return 0;
	else if(a==2)
	return 1;
	else
	{
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				flag=0;
				break;
			 } 
		}
		return flag;
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	if(Iszhi(a)==1)
	printf("a������\n");
	else
	printf("a��������\n");
 	return 0;
}

