#include <stdio.h>
#include <string.h>
int main()
{
	int n,l,s=0;
	char type[15];
	scanf("%d%d ",&n,&l);
	for(int i=1;i<=n;i++)
	{
	    gets(type);
			if(type[0]=='c')
		    s++;
		    else if(type[0]=='i')
		    s+=4;
		    else
		    s+=8;
	}
	printf("%d",s*l);
 	return 0;
}

