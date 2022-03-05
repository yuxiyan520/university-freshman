#include <stdio.h>
#include <string.h>
int main()
{
	int a=0,b=0;
	double c;
	char s[5];
while(scanf("%s",s) != EOF)
{
  if(s[0]=='A')
  a++;
  if(s[0]!='C')
  b++;
}
c=1.0*a/b;
printf("%.3lf",c);
 	return 0;
}

