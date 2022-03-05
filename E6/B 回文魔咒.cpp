#include <stdio.h>
#include <math.h>
#include <string.h>
int n,len,i,j,flag;
char a[110],b[110],c[110]; 
int main()
{
	scanf("%d\n",&n);
	while(n--)
	{
		flag=0;
		for(i=0;i<=100;i++)
		b[i]=0;
		gets(a);
		len=strlen(a);
		j=0;
		for(i=0;i<len;i++)
		{
			if(a[i]>=65&&a[i]<=90)
			{
				b[j]=a[i];
				j++;
			}
			if(a[i]>=97&&a[i]<=122)
			{
				b[j]=a[i]-32;
				j++;
			}
		}
		len=strlen(b);
		if(len%2==0)//Å¼Êý
		{
		 	for(i=0;i<len/2;i++)
		 	{
		 		c[i]=b[len-1-i];
			 }	
			if((strncmp(b,c,len/2))!=0)
			flag=1;
		}
		else//ÆæÊý 
		{
			for(i=0;i<(len-1)/2;i++)
			{
				c[i]=b[len-1-i];
			}
			if((strncmp(b,c,(len-1)/2))!=0)
			flag=1;	
		 } 
		if(flag==1)
		printf("$tr1ng\n");
		if(flag==0)
		printf("P1@lin&r0rne\n");
	}
 	return 0;
}

