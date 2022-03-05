#include <stdio.h>
#define N 10
void px_s(int []);//√∞≈›≈≈–Ú£¨…˝–Ú 
void px_j(int []);//√∞≈›≈≈–Ú£¨Ωµ–Ú 
int a[N],i;
int main()
{
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	px_s(a);
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
	px_j(a);
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
 	return 0;
}

void px_s(int m[N]) 
{
	int i,j,swag,flag;
	for(i=1;i<N;i++)
	{
		flag=0;
		for(j=0;j<N-i;j++)
		{
			if(m[j]>m[j+1])
			{
				swag=m[j+1];
				m[j+1]=m[j];
				m[j]=swag;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}
void px_j(int m[N]) 
{
	int i,j,swag,flag;
	for(i=1;i<N;i++)
	{
		flag=0;
		for(j=0;j<N-i;j++)
		{
			if(m[j]<m[j+1])
			{
				swag=m[j];
				m[j]=m[j+1];
				m[j+1]=swag;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}
