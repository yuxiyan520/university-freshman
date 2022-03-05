#include <stdio.h>
#include <math.h>
#include <string.h>
int my_strlen(char *str)
{
	if(*str=='\0')
	return 0;
	else
	return 1+my_strlen(str+1); 
}
int main()
{
	char arr[]="bit"; 
	int len=my_strlen(arr);
	printf("%d",len);
 	return 0;
}

