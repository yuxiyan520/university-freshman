#include <stdio.h>
#include <string.h>
int main()
{
	char n[110];
	int i,len;
	scanf("%s",&n);
	len=strlen(n);
	if(len==0)
	printf("Yes\n");
	else if(n[0]=='w')
	{
		for(i=1;i<len;i++)
		{
			if(n[i]!='w')
			break;
		}
		if(i==len-1)
		printf("Yes\n");
		else
		{
			for(i;i<len;i++)
			if(n[i]!='b')
			{
				printf("No\n");
				break;
			}
			if(i==len)
			printf("Yes\n");
		}
	}
	else if(n[0]=='b')
	{
		for(i=1;i<len;i++)
		{
			if(n[i]!='b')
			break;
		}
		if(i==len-1)
		printf("Yes\n");
		else
		{
			for(i;i<len;i++)
			if(n[i]!='w')
			{
				printf("No\n");
				break;
			}
			if(i==len)
			printf("Yes\n");
		}
	}
 	return 0;
}

