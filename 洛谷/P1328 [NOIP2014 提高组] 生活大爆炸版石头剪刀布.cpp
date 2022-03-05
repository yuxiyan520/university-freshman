#include <stdio.h>
#include <math.h>
#include <string.h>
Cai(int x,int y)
{
	if(x==0)
	{
		if(y==0)
		return 0;
		else if(y==1||y==4)
		return 2;
		else
		return 1;
	}
	else if(x==1)
	{
		if(y==1)
		return 0;
		else if(y==2||y==4)
		return 2;
		else
		return 1;
	}
	else if(x==2)
	{
		if(y==2)
		return 0;
		else if(y==0||y==3)
		return 2;
		else
		return 1;
	}
	else if(x==3)
	{
		if(y==3)
		return 0;
		else if(y==0||y==1)
		return 2;
		else
		return 1;
	}
	else
	{
		if(y==4)
		return 0;
		else if(y==2||y==3)
		return 2;
		else
		return 1;
	}
}
int main()
{
	int n,na,nb,a[202]={0},b[202]={0},i,wa=0,wb=0;
	scanf("%d%d%d",&n,&na,&nb);
	for(i=0;i<na;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<nb;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(Cai(a[i%na],b[i%nb])==1)
		wa++;
		else if(Cai(a[i%na],b[i%nb])==2)			
		wb++;		
	}
	printf("%d %d",wa,wb);
 	return 0;
}

