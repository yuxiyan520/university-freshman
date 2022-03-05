#include <stdio.h>
int jianyan(int [][10]);
int a[10][10],i,j;
int main()
{
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(jianyan(a)?"Cheers! O(^_^)O":"Emergency food! ~>_<~");
 	return 0;
}
int jianyan(int b[][10])
{
	int i,j,k,l,flag=0,c[10];
	for(i=0;i<9;i++)//判断一行是否有重复的 
	{
		for(k=1;k<=9;k++)
		c[k]=0;
		for(j=0;j<9;j++)
		{
			c[(b[i][j])]++;
		}
		for(k=1;k<=9;k++)
		{
			if(c[k]>1)
			{
				flag=1;
				goto step;
			}
		}
	}
	for(j=0;j<9;j++)//判断一列是否有重复的 
	{
		for(k=1;k<=9;k++)
		c[k]=0;
		for(i=0;i<9;i++)
		{
			c[(b[i][j])]++;
		}
		for(k=1;k<=9;k++)
		{
			if(c[k]>1)
			{
				flag=1;
				goto step;
			}
		}
	}
	for(l=0;l<=2;l++)//判断3*3的小数独是否有重复的 
	{
		for(k=1;k<=9;k++)
		c[k]=0;
		for(i=l*3;i<3*(l+1);i++)
		{
			for(j=l*3;j<3*(l+1);j++)
			{
				c[(b[i][j])]++;
			}
		}
		for(k=1;k<=9;k++)
		{
			if(c[k]>1)
			{
				flag=1;
				goto step;
			}
		}
	}
	step:
	if(flag==1)
	return 0;
	if(flag==0)
	return 1;
}

