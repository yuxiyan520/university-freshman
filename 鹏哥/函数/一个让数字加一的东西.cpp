#include <stdio.h>
#include <math.h>
#include <string.h>
void Add(int *);
int main()
{
	int num=0;
	Add(&num);
	printf("%d ",num);
 	return 0;
}

void Add(int *a)
{
	(*a)++;
}
