//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//int rise_int(const int *p1, const int *p2)
//	{
//		if (p1[0] < p2[0] ) return -1;
//		if (p1[0] > p2[0] ) return 1;
//		return 0;
//	}
//int main()
//{
//	int t,a[1005]={0},b[1005]={0},c[1005]={0},i,n,lnum,j,k;
//	char m;
//	scanf("%d",&t);
//	while(t--)
//	{
//		j=0,k=0;
//		lnum=0;
//		scanf("%d",&n);
//		for(i=0;i<n;i++)
//		{
//			scanf("%d",&a[i]);
//		}
//		getchar();
//		for(i=0;i<n;i++)
//		{
//			scanf("%c",&m);
//			if(m=='R')
//			{
//				b[j]=a[i];//hong
//				j++;
//			}
//			else
//			{
//				c[k]=a[i];//lan
//				k++;
//			}
//		}
//		qsort(b,j, sizeof(b[0]), rise_int);
//		qsort(c,k, sizeof(b[0]), rise_int);
//		for(i=0;i<k;i++)
//		{
//			if(c[i]<i+1)
//			break;
//		}
//		if(i==k)
//		{
//			for(i=0;i<j;i++)
//			{
//				if(b[i]>k+1+i)
//				break;
//			}
//			if(i==j)
//			printf("YES\n");
//			else
//			printf("NO\n");
//		}
//		else
//		printf("NO\n");
//	}
// 	return 0;
//}

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
	int fall_int(const int *p1, const int *p2)
	{
		if ( p1[0] > p2[0] ) return -1;
		if (p1 [0] < p2[0]) return 1;
		return 0;
	}
	int rise_int(const int *p1, const int *p2)
	{
		if (  p1[1] >p2[1])return -1;
		if (p1[1] < p2[1] ) return 1;
		return 0;
	}
	char input[10005][1005];
	int l[10005][5];
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
	qsort(l,20, sizeof(l[0]),rise_int);
	for(j=0;j<20;j++)
	{
		printf("%s\n",input[(l[j][1])]);
	}
 	return 0;
}
