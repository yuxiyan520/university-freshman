#include <stdio.h>
int Q(int);
int main()
{
	int m,l;
	scanf("%d",&m);
	l=Q(m);
	printf("%d",l);
 	return 0;
}
int Q(int i)
{
	if(i==1||i==2||i==3)
	return 1;
	
	return Q(i-3)+Q(i-1);
	
}
