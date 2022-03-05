#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char b[1000005];
	gets(b);
	int i,len,sum=0;
	len=strlen(b);
	for(i=0;i<len;i++)
	{
		if(b[i]=='t'&&b[i+1]=='w'&&b[i+2]=='o')
		{
			sum+=2;
			i+=2;
		}
		else if(b[i]=='t'&&b[i+1]=='h'&&b[i+2]=='r'&&b[i+3]=='e'&&b[i+4]=='e')
		{
			sum+=3;
			i+=4;
		}
		else if(b[i]=='f'&&b[i+1]=='o'&&b[i+2]=='u'&&b[i+3]=='r')
		{
			sum+=4;
			i+=3;
		}
		else if(b[i]=='f'&&b[i+1]=='i'&&b[i+2]=='v'&&b[i+3]=='e')
		{
			sum+=5;
			i+=3;
		}
		else if(b[i]=='s'&&b[i+1]=='i'&&b[i+2]=='x')
		{
			sum+=6;
			i+=2;
		}
	}
	printf("%d",sum);
 	return 0;
}

