#include <stdio.h>
#include <math.h>
#include <string.h>
void move(char from,char to)
{
	printf("%c -> %c\n",from,to);
}
void hanoi(int n,char from,char via,char to)
{
	if(n==1)
	{
		move(from,to);
		return;
	}
	hanoi(n-1,from,to,via);
	move(from,to);
	hanoi(n-1,via,from,to);
}
int main()
{
	int n;
	char a='A',b='B',c='C';
	scanf("%d",&n);
	hanoi(n,a,b,c);
 	return 0;
}

