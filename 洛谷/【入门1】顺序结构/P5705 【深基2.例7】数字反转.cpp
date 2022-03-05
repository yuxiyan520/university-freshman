#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char a[6];
	scanf("%s",&a);
	for(int i=4;i>=0;i--)
	{
		printf("%c",a[i]);
	}
 	return 0;
}

