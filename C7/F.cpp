#include <stdio.h>
#include <math.h>
#include <string.h>
void px_j(int [],char *);
int n,score[1005],i;
char name[1005],*pa;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%d",&name[i],&score[i]);
	}
	px_j(score,&name);
 	return 0;
}

void px_j(int m[N],char *pa) 
{
	int i,j,swag,flag,l;
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
				pa[j]=&name[j+1];
				pa[j+1]-&name[j];
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}

