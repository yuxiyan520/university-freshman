#include <stdio.h>
#include <math.h>
#include <string.h>
void move(int n,char from,char to,int *count)
{
	printf("%d:%c-->%c\n",n,from,to);
	count++;
}
void ham(int n,char from,char via,char to,int *count)
{
	if(n==1)
	{
	move(1,from,to,count);
	return ;
	}
	ham(n-1,from,to,via,count);
	move(n,from,to,count);
	ham(n-1,via,from,to,count);
}
int count=0;
int main()
{
	char a='A',b='B',c='C';
	ham(16,a,b,c,&count);
	printf("%d",&count);
 	return 0;
}

