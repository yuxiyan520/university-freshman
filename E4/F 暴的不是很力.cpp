#include <stdio.h>

int main()
{
	int a,b,c,i,j,a1,b1,c1,q,l=0;
	scanf("%d%d%d",&a,&b,&c);
	for(i=123;i<1000*a/c;i++)
	{
		int n[12]={0};
		q=0;
		if(i%a!=0)
		continue;
		else if(i/a*c>=1000)
		continue;
		a1=i;
		for(j=1;j<=3;j++)
		{
			n[a1%10]++;
			a1/=10;
		}
		b1=i/a*b;
		for(j=1;j<=3;j++)
		{
			n[b1%10]++;
			b1/=10;
		}
		c1=i/a*c;
		for(j=1;j<=3;j++)
		{
			n[c1%10]++;
			c1/=10;
		}
		if(n[0]!=0)
		continue;
		for(j=1;j<=9;j++)
		{
			if(n[j]>1)
			{
				q=1;
				break;
			}
		}
		if(q==1)
		continue;
		if(q==0)
		{
			printf("%d %d %d\n",i,i/a*b,i/a*c);
			l++;
		}
	}
	if(l==0)
	{
		printf("NOT FOUND\n");
	}
 	return 0;
}

