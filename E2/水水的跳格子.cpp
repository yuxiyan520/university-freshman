#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,sz=0,j,q,bq,k,m=0;
	char a[111];
	char b[4] = "~~~";
	char min='~';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		while(a[m]!=0)
		{
			sz++;
			m++;
		}
		for(q=0,bq=0;q<3;q++,bq++)
		{
			for(j=q+1;j<sz;j++)
			{
				if(a[q]==a[j])
				q=j;
				if(j-q>3)
				break;
				if(q>=sz-3)
				b[bq]=a[q];
			}
		}
		if((b[0]+b[1]+b[2])/3==126)
		printf("You loser!\n");
		else
		{
			for(k=0;k<3;k++)
			{
				if(min>b[k])
				min=b[k];
			}
			printf("%c\n",min);
		}
	}
 return 0;
}

