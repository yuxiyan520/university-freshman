//方法一：按字符长度排序，再将前20个按出场顺序排序 
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//	int fall_int(const int *p1, const int *p2)
//	{
//		if (p1[0] > p2[0] ) return -1;
//		if (p1 [0] < p2[0]) return 1;
//		return 0;
//	}
//	int rise_int(const int *p1, const int *p2)
//	{
//		if (p1[1] <p2[1])return -1;
//		if (p1[1] > p2[1] ) return 1;
//		return 0;
//	}
//	char input[100005][1005];
//	int l[100005][5];
//int main()
//{
//	int i=0,j;
//	while((gets(input[i]))!=NULL)
//	{
//		l[i][0]=strlen(input[i]);
//		l[i][1]=i;
//		i++;
//	}
//	qsort(l,i, sizeof(l[0]),fall_int);
//	qsort(l,20, sizeof(l[0]),rise_int);
//	for(j=0;j<20;j++)
//	{
//		printf("%s\n",input[(l[j][1])]);
//	}
// 	return 0;
//}


//方法二：只排列字符串长度在前20的字符串
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

	int rise_int(const int *p1,const int *p2)
	{
		if(p1[0]>p2[0]) return 1;
		if(p1[0]<p2[0]) return -1;
		return 0;
	}
char input[30][1005]={0},a[1005]={0},*pa,*pinput,*hold=NULL,astr;
int l[30][3];
int main()
{
	int i=0,j=20,k=0;
	for(i=0;i<20;i++)
	{
		gets(input[i]);
		l[i][0]=strlen(input[i]);
		l[i][1]=i;
	}
	qsort(l,20,sizeof(l[0]),rise_int);
	pinput=input;
	pa=a;
	while((gets(a))!=NULL)
	{
		astr=strlen(a);
		if(astr>l[0][0])
		{
			for(i=0;i<20;i++)
			{
				if(astr<=l[i][0])
				break;
			}
			for(k=0;k<i-1;k++)
			{
				l[k][0]=l[k+1][0];
				l[k][1]=l[k+1][1];
				*(pinput+k)=*(pinput+k+1);
			}
			l[i-1][0]=astr;
			l[i-1][1]=j;
			j++;
			
		}
		else
		continue;
		
	}
	for(j=0;j<20;j++)
	{
		printf("%s\n",input[(l[j][1])]);
	}
 	return 0;
}
