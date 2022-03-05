#include <stdio.h>
#include <string.h>
int main()
{
	char a[110],b[110];
	gets(a);
	gets(b);
	if(strstr(a,b)==NULL)
	{
		printf("NO");
	}
	else
	{
		printf("YES %d",strstr(a,b)-a);
	}
 	return 0;
}

