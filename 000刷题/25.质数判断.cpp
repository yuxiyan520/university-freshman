#include <stdio.h>
#include <math.h>
#include <string.h>
int zhi(int);
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(zhi(n)==0)
		printf("Yes\n");
		else
		printf("No\n");
	}
 	return 0;
}

int zhi(int m)
{
	int flag=0,i;
	if(m==1)
	return 1;
	if(m==2||m==3)
	return 0;
	for(i=2;i<=sqrt(m);i++)
	{
		if(m%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
