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
		move(from,via);
		move(via,to);
		return;
	}
	hanoi(n-1,from,via,to);
	move(from,via);
	hanoi(n-1,to,via,from);
	move(via,to);
	hanoi(n-1,from,via,to);
}
int main()
{
	int n,t;
	char a='A',b='B',c='C';
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		hanoi(n,a,b,c);
		printf("\n");
	}
	
 	return 0;
}
