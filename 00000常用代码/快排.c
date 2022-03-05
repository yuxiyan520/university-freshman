#include <stdio.h>
#include <math.h>
#include <string.h>
	#include <stdlib.h>
	int rise_double(const void *p1, const void *p2)
	{
		if ( *(double *)p1 < *(double *)p2 ) return -1;
		if ( *(double *)p1 > *(double *)p2 ) return 1;
		return 0;
	}
	int fall_double(const double *p1, const double *p2)
	{
		if ( *p1 > *p2 ) return -1;
		if ( *p1 < *p2 ) return 1;
		return 0;
	}
	
	int rise_int(const void *p1, const void *p2)
	{
		if ( *(int *)p1 < *(int *)p2 ) return -1;
		if ( *(int *)p1 > *(int *)p2 ) return 1;
		return 0;
	}
	int fall_int(const int *p1, const int *p2)
	{
		if ( *p1 > *p2 ) return -1;
		if ( *p1 < *p2 ) return 1;
		return 0;
	}
	
	
int main()
{
	
	qsort(a, N_ITEMS, sizeof(double), rise_double);

 	return 0;
}

