#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char a;
	scanf("%c",&a);
	if(a>=97&&a<=122)
	printf("Lowercase letter QAQ..");
	else if(a>=65&&a<=90)
	printf("Capital! \\^ ^/");
	else if(a>=48&&a<=57)
	printf("! Number !");
	else
	printf("I can't read.");
 	return 0;
}

