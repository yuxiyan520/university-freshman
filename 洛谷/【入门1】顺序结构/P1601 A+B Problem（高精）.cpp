#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char a[505]={0},b[505]={0};
	int as[505]={0},bs[505]={0},c[505]={0},i,alen,blen,max;
	scanf("%s",&a);
	scanf("%s",&b);
	alen=strlen(a);
	blen=strlen(b);
	if(alen>blen)
	max=alen;
	else
	max=blen;
	for(i=0;i<alen;i++)
	{
		as[i]=a[alen-1-i]-'0';
	}
	for(i=0;i<blen;i++)
	{
		bs[i]=b[blen-1-i]-'0';
	}
	for(i=0;i<max||c[i]!=0;i++)
	{
		c[i]+=as[i]+bs[i];
		if(c[i]>=10)
		{
			c[i+1]+=(c[i]/10);
			c[i]%=10;
		}
	}
	for(i--;i>=0;i--)
	{
		printf("%d",c[i]);
	}
 	return 0;
}

