#include<stdio.h>
#include<string.h>
void rev(char *, char *);
int main()
{
	int len,i,flag=0;
	char str[205], substr[205], *p;
	scanf("%s%s", str, substr);
	len=strlen(substr);
	for(i=0;i<=(len-1)/2;i++)
	{
		if(substr[i]!=substr[len-1-i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%s",str);
	}
	else
	{
		p=str;
	while((p = strstr(p, substr)) != NULL)
	{
			rev(p, p + strlen(substr)-1);
			p=p+strlen(substr)-1;
			
}
	puts(str);
	}
	return 0;
}
void rev(char* first, char* last)
{
	int tmp;
	while(first < last)
	{
	tmp = *last;
	*last = *first;
	*first = tmp;
	first++, last--;
	}
}

