#include <stdio.h>
#include <string.h>
int main()
{
	int n,a=0,b=0,c=0,am=0,bm=0,cm=0,ma=101,mb=101,mc=101,i,j,k,as=0,bs=0,cs=0;
	char l;
	scanf("%d",&n);
	scanf("\n");
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		scanf("%c %d\n",&l,&j);
		else
		scanf("%c %d",&l,&j);
		if(l=='A')
		{
			a+=j;
			as++;
			if(j>=am)
			am=j;
			if(j<=ma)
			ma=j;
		}
		if(l=='B')
		{
			b+=j;
			bs++;
			if(j>=bm)
			bm=j;
			if(j<=mb)
			mb=j;	
		}
		if(l=='C')
		{
			c+=j;
			cs++;
			if(j>=cm)
			cm=j;
			if(j<=mc)
			mc=j;
		}
	}
	a/=as;
	b/=bs;
	c/=cs;
	if(a>b&&a>c)
	printf("A\n");
	else if(b>a&&b>c)
	printf("B\n");
	else
	printf("C\n");
	printf("%d %d\n",am,ma);
	printf("%d %d\n",bm,mb);
	printf("%d %d\n",cm,mc);
 	return 0;
}

