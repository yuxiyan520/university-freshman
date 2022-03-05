#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
	int fall_int(const void *p1, const void *p2)
	{
		if (p1[0] > p2[0] ) return -1;
		if (p1 [0] < p2[0]) return 1;
		return 0;
	}
	int rise_int(const int *p1, const int *p2)
	{
		if (  p1[1] >p2[1])return -1;
		if (p1[1] < p2[1] ) return 1;
		return 0;
	}
	char input[100005][1005];
	int l[100005][5];
int main()
{
	int i=0,j;
	while((gets(input[i]))!=NULL)
	{
		l[i][0]=strlen(input[i]);
		l[i][1]=i;
		i++;
	}
	qsort(l,i, sizeof(l[0]),fall_int);
	qsort(l,20, sizeof(int),rise_int);
	for(j=0;j<20;j++)
	{
		printf("%s\n",input[(l[j][1])]);
	}
 	return 0;
}

