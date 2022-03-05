#include <stdio.h>
#include <math.h>
#include <string.h>
void f1(int k)
{
	int m,i;
	if(k>0)
	{
		for(i=sqrt(k);i>=2;i--)
		{
			if(k%(i*i)==0)
			break;	
		}
		if(i==1)
		{
			if(k==1)
			printf("1\n");
			else
			{
				printf("sqrt(%d)\n",k);
			}
		}
		else
		{
			k=k/(i*i);
			if(k==1)
			{
				printf("%d\n",i);
			}
			else
			{
				printf("%d*sqrt(%d)\n",i,k);
			}
		}
	}
	else if(k<0)
	{
		k*=(-1);
		for(i=sqrt(k);i>=2;i--)
		{
			if(k%(i*i)==0)
			break;	
		}
		if(i==1)
		{
			if(k==1)
			printf("i\n");
			else
			{
				printf("sqrt(%d)*i\n",k);
			}
		}
		else
		{
			k=k/(i*i);
			if(k==1)
			{
				printf("%d*i\n",i);
			}
			else
			{
				printf("%d*sqrt(%d)*i\n",i,k);
			}
		}
	}
	else
	printf("0\n");
}
void f2(int k)
{
	k%=4;
	if(k==1)
	printf("i\n");
	if(k==2)
	printf("-1\n");
	if(k==3)
	printf("-i\n");
	if(k==0)
	printf("1\n");
}
int main()
{
	int n,o,k,i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&o,&k);
		if(o==1)
		f1(k);
		if(o==2)
		f2(k);
	}
 	return 0;
}

