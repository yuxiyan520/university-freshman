#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,m,a[100005][2],s,x,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	i=0;
	while(m--)
	{
		scanf("%d%d",&s,&x);
		if(a[i][0]^s==1)//ÄæÊ±Õë 
		{
			i=(i+x)%n;
		}
		else//Ë³Ê±Õë 
		{
			if(i-x<0)
			i=i+n-x;
			else
			i-=x;
		}
	}
	printf("%d",a[i][1]);
 	return 0;
}

