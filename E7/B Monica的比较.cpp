#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n,len_a,len_b,len_da,len_xiao,count,m;
	char a[105],b[105],*da,*xiao;
	scanf("%d",&n);
	while(n--)
	{
		count=0;
		scanf("%s",&a);
		scanf("%s",&b);
		len_a=strlen(a);
		len_b=strlen(b);
		if(len_a>=len_b)
		{
			len_da=len_a;
			len_xiao=len_b; 
			da=a;
			xiao=b;
		}
		if(len_a<len_b)
		{
			len_da=len_b;
			len_xiao=len_a; 
			da=b;
			xiao=a;
		}
		m=len_da-len_xiao;
		for(;len_xiao>0;da++,xiao++,len_xiao--)
		{
			if(*da!=*xiao)
			{
				count++;
			 } 
		}
		printf("%d\n",count+m);
	 } 
 	return 0;
}

