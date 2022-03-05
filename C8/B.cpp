#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char a[6]="EDGnb";
	char b[780];
	char *pb,*pa=NULL;
	pb=b;
	scanf("%s",&b);
	pa=strstr(b,a);
	if(pa==NULL)
	printf("-1");
	else
	printf("%d",pa-pb+1);
 	return 0;
}

