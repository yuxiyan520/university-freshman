#include <stdio.h>
#include <math.h>
#include <string.h>
int n,num=0,a[100000],b[10]={0},c[10]={0},p=0;
int Sum()
{
	int l=0;
	for(int i=0;i<10;i++)
	{
		l+=b[i];
	}
	return l;
}
void dsf(int m)
{
	if(Sum()==n)
	{
		num++;
		for(int i=0;i<10;i++)
		{
			a[p]=b[i];
			p++;
		}
	}
	for(int i=1;i<=3;i++)
	{
		if(Sum()+i>n)
		break;
		if(c[m]==0)
		{
			c[m]++;
			b[m]+=i;
			dsf(m+1);
			c[m]=0;
			b[m]=0;
		}
	}
}
int main()
{
	scanf("%d",&n);
	if(n<=10||n>30)
	{
		printf("0\n");
	}
	else
	{
		dsf(0);
	}
	printf("%d\n",num);
	p=0;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("%d ",a[p]);
			p++;
		}
		printf("\n");
	}
 	return 0;
}

