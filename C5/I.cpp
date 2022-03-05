#include <stdio.h>
#include <string.h>
int main()
{
	char s[1010];
	int i,len;
	while(gets(s)!=NULL)
	{
		int b=0,e=0;
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='g'&&s[i+3]=='i'&&s[i+4]=='n')
			{
				b++;
				i+=4;
			}
			if(s[i]=='e'&&s[i+1]=='n'&&s[i+2]=='d')
			{
				i+=2;
				e++;
			}
			if(e>b)
			{
				printf("no\n");
				break;
			}
		}
		if(b>=e)
		printf("yes\n");
	}
 	return 0;
}

