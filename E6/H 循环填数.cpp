#include <stdio.h>
#include <math.h>
#include <string.h>
int U(int,int);//返回下次的第一个数 
int n,d,a[101][101],q,m=1,i,j;
int main()
{
	scanf("%d%d",&n,&d);
	if(d%2==0)
	{
		for(q=1;q<=d/2;q++)
		m=U(q,m);
	}
	else
	{
		for(q=1;q<=(d+1)/2;q++)
		m=U(q,m);
	}
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
 	return 0;
}

int U(int qi,int shu)
{
	int i,j;
	for(i=qi,j=qi;j<=d+1-qi;j++)
	{
		a[i][j]=shu;
		shu++;
		if(shu>n)
		shu=1;
	}
	for(j=d+1-qi,i=qi+1;i<=d+1-qi;i++)
	{
		a[i][j]=shu;
		shu++;
		if(shu>n)
		shu=1;
	}
	for(i=d+1-qi,j=d-qi;j>=qi;j--)
	{
		a[i][j]=shu;
		shu++;
		if(shu>n)
		shu=1;
	}
	for(j=qi,i=d-qi;i>qi;i--)
	{
		a[i][j]=shu;
		shu++;
		if(shu>n)
		shu=1;
	}
	return shu;
}
