#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a,b,c,d,b0[5],c0[6],d0,add=0,len,i;
	char arr[20]={0};
	scanf("%s",&arr);
	len=strlen(arr);
	if(arr[12]!='X')
	{
		sscanf(arr,"%d-%d-%d-%d",&a,&b,&c,&d);
		b0[1]=b/100;
		b0[3]=b%10;
		b0[2]=(b%100)/10;
		for(i=5;i>=1;i--)
		{
			c0[i]=c%10;
			c/=10;
		}
		for(i=1;i<=3;i++)
		{
			add+=b0[i]*(1+i);
		}
		for(i=1;i<=5;i++)
		{
			add+=c0[i]*(4+i);
		}
		add+=a;
		d0=add%11;
		if(d0==d)
		printf("Right");
		else
		{
			for(i=0;i<12;i++)
			printf("%c",arr[i]);
			if(d0!=10)
			printf("%d",d0);
			else
			printf("X");
		}
	}
	else
	{
		sscanf(arr,"%d-%d-%d-X",&a,&b,&c);
		b0[1]=b/100;
		b0[3]=b%10;
		b0[2]=(b%100)/10;
		for(i=5;i>=1;i--)
		{
			c0[i]=c%10;
			c/=10;
		}
		for(i=1;i<=3;i++)
		{
			add+=b0[i]*(1+i);
		}
		for(i=1;i<=5;i++)
		{
			add+=c0[i]*(4+i);
		}
		add+=a;
		d0=add%11;
		if(d0==10)
		printf("Right");
		else
		{
			for(i=0;i<12;i++)
			printf("%c",arr[i]);
			printf("%d",d0);
		}
	}
 	return 0;
}

