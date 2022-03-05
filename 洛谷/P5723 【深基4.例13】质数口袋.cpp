#include <stdio.h>
#include <math.h>
#include <string.h>
int Iszhi(int a)//质数返回1，非质数返回0 
{
	int flag=1,i;
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
int main()
{
	int l,i,add,sum;
	scanf("%d",&l);
	if(l==1)
	printf("0");
	else if(l==2)
	{
		printf("2\n1\n");
	}
	else
	{
		printf("2\n");
		add=2;
		sum=1;		
		for(i=3;;i+=2)
		{
			if(Iszhi(i)==1)
			{
				if(add+i<=l)
				{
					add+=i;
					sum++;
					printf("%d\n",i);
				}
				else
				{
					printf("%d\n",sum);
					break;
				}
			}
		}
	}
 	return 0;
}

