#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n=0,fen[105]={0},i=1,zong=0,zong1=0,zong2=0,m1=0,m2=0;
	double m,n1,n2;
	while((scanf("%d",&fen[i]))!=EOF)
	{
		zong+=fen[i];
		i++;
	}
	n=i-1;
	if(zong%n==0)
	{
		m=zong/n;
		printf("%d %d\n",n,zong/n);
	}
	else
	{
		m=(1.0*zong)/n;
		printf("%d %.2lf\n",n,m);
	}
	for(i=1;i<=n;i++)
	{
		if(fen[i]>=m)
		{
			m1++;
			zong1+=fen[i];
		}
		else
		{
			m2++;
			zong2+=fen[i];
		}
	}
	if(zong1%m1==0)
	{
		printf("%d %d\n",m1,zong1/m1);
	}
	else
	{
		n1=(1.0*zong1)/m1;
		printf("%d %.2lf\n",m1,n1);
	}
	if(zong2%m2==0)
	{
		printf("%d %d\n",m2,zong2/m2);
	}
	else
	{
		n2=(1.0*zong2)/m2;
		printf("%d %.2lf\n",m2,n2);
	}
 	return 0;
}

