#include <stdio.h>
#include <math.h>
#include <string.h>
void q(int [],int);
int l,f,a[10],i;
int main()
{
	scanf("%d%d",&l,&f);
	for(i=l;i<=f;i++)
	{
		q(a,i);
	}
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
 	return 0;
}

void q(int b[],int m)
{
	if(m==0)
	b[0]++;
	else
	{
		while(m!=0)
		{
			b[m%10]++;
			m/=10;
		}
	}
}
