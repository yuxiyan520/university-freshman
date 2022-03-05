#include <stdio.h>
#include <math.h>
#include <string.h>
char s[3005],s0[3005],a[3005];
int len0,len,i,j,m,sum=0,lov=0;
int main()
{
	gets(s);
	gets(s0);
	len=strlen(s);
	len0=strlen(s0);
	if(len>len0)
	{
		printf("0");
	}
	else
	{
		for(i=0;i<=len0-len;i++)
		{
			lov=0;
			for(j=0,m=i;j<=len-1;j++,m++)
			{
				if(s[j]!=s0[m])
				{
					lov++;
				}
			}
			if(lov<=3)
			{
				sum++;
			}
		}
		printf("%d",sum);
	}
 	return 0;
}

