#include <stdio.h>
#include <math.h>
#include <string.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition_s(int a[], int start, int end)
{
    int pivot = a[start];
    int p = start+1;
    int q = end;
    while(p <= q)
	{
        while(a[p] < pivot && p <= q) p++;
        while(a[q] >= pivot && p <= q) q--;
        if(p < q)
		{
            swap(&a[p], &a[q]);
        }
    }
    swap(&a[start], &a[q]);
    return q;
}

void qs_s(int a[], int start, int end)//ÉıĞò 
{
    if(start >= end)
	{
        return;
    }
    int mid = partition_s(a, start, end);
    qs_s(a, start, mid-1);
    qs_s(a, mid+1, end);
}

int partition_j(int a[], int start, int end)
{
    int pivot = a[start];
    int p = start+1;
    int q = end;
    while(p <= q)
	{
        while(a[p] > pivot && p <= q) p++;
        while(a[q] <= pivot && p <= q) q--;
        if(p < q)
		{
            swap(&a[p], &a[q]);
        }
    }
    swap(&a[start], &a[q]);
    return q;
}

void qs_j(int a[],int start,int end)
{
	if(start >= end)
	{
        return;
    }
    int mid = partition_j(a, start, end);
    qs_j(a, start, mid-1);
    qs_j(a, mid+1, end);
}

int main()
{
	int a[100]={2,4,2,6,5,3,1},i;
	qs_s(a,0,7);
	for(i=0;i<=7;i++)
	printf("%d ",a[i]);
	printf("\n");
	qs_j(a,0,7);
	for(i=0;i<=7;i++)
	printf("%d ",a[i]);
 	return 0;
}

