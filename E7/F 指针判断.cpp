#include <stdio.h>
#include <math.h>
#include <string.h>
void f(char a[105])
{
	int i=0,q,d0;
	char *pa,b[100]={0},c[100]={0},d[100]={0},*pb,*pc,*pd;
	pa=a;
	i=0;
		while(a[i]!='*')
		i++;
		if(a[i-1]=='(')
		{
			while(a[i]!=')')
				i++;
			if(a[i+1]=='[')
			{
				i=1;
				while(a[i]!='(')
					i++;
				a[i]='\0';
				strcpy(b,pa);
				strcpy(c,pa+i+2);
				i=0;
				pc=c;
				while(c[i]!='[')
					i++;
				strcpy(d,pc+i);
				c[i-1]='\0';
				printf("%s(*)%s %s -> %s%s\n",b,d,c,b,d);
			}
			else
			{
				i=1;
				while(a[i]!='(')
					i++;
				a[i]='\0';
				strcpy(b,a);
				strcpy(c,pa+i+2);
				i=0;
				pc=c;
				while(c[i]!='(')
					i++;
				strcpy(d,pc+i);
				c[i-1]='\0';
				printf("%s(*)%s %s -> %s%s\n",b,d,c,b,d);
			}
		}
		else
		{
			if(a[i+1]=='*')
			{
				a[i]='\0';
				a[i+1]='\0';
				strcpy(b,a);
				strcpy(c,pa+i+2);
				printf("%s** %s -> %s*\n",b,c,b);
			}
			else
			{
				i=0;
				while(a[i]!='*')
					i++;
				a[i]='\0';
				strcpy(b,a);
				strcpy(c,pa+i+1);
				printf("%s* %s -> %s\n",b,c,b);
			}
		}
}
int main()
{
	char a[105];
	while((scanf("%s",&a))!=EOF)
	{
		f(a);
		
	}
 	return 0;
}

