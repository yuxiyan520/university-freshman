#include <stdio.h>
int jianyan(int [][10]);
int main()
{
	int a[10][10],i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if((jianyan(a))==1)
	printf("Cheers! O(^_^)O");
	else
	printf("Emergency food! ~>_<~");
 	return 0;
}

int jianyan(int b[][10])
{
	int i,j,k,s=0;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			
		}
	}
	for(j=0;j<9;j++)
	{
		for(i=0;i<9;i++)
		{
			
		}
	}
	
}
