#include <stdio.h>
#include <math.h>
#include <string.h>
int hei_p(int [][30]);
int bai_p(int [][30]);
int N,i,j,a[30][30],hei=0,bai=0;
int main()
{
	scanf("%d",&N);
	for(i = 5; i <= N+4; i++)
	{
        for(j = 5; j <= N+4; j++)
		{
            scanf("%d", &a[i][j]);
        }
    }
	hei=hei_p(a);
	bai=bai_p(a);
    printf("%d\n%d\n",hei,bai);
 	return 0;
}

int hei_p(int b[][30])
{
	int i,j,k=0;
	for(i = 5; i <= N+4; i++)
	{
        for(j = 5; j <= N+4; j++)
		{           
			if(b[i][j]==1&&b[i][j+1]==1&&b[i][j+2]==1&&b[i][j+3]==1&&b[i][j+4]==1)
			k++;
			if(b[i][j]==1&&b[i+1][j]==1&&b[i+2][j]==1&&b[i+3][j]==1&&b[i+4][j]==1)
			k++;
			if(b[i][j]==1&&b[i+1][j+1]==1&&b[i+2][j+2]==1&&b[i+3][j+3]==1&&b[i+4][j+4]==1)
			k++;
        }
    }
    return k;
}

int bai_p(int b[][30])
{
	int i,j,k=0;
	for(i = 5; i <= N+4; i++)
	{
		for(j = 5; j <= N+4; j++)
		{ 
        if(b[i][j]==2&&b[i][j+1]==2&&b[i][j+2]==2&&b[i][j+3]==2&&b[i][j+4]==2)
		k++;
		if(b[i][j]==2&&b[i+1][j]==2&&b[i+2][j]==2&&b[i+3][j]==2&&b[i+4][j]==2)
		k++;
		if(b[i][j]==2&&b[i+1][j+1]==2&&b[i+2][j+2]==2&&b[i+3][j+3]==2&&b[i+4][j+4]==2)
		k++;
		}
    }
    return k;
}
