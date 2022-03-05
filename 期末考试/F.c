#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int cmp(const double *p1,const double *p2)
{
	
	if(p1[0]>p2[0])
	return 1;
	else if(p1[0]<p2[0])
	return -1;
	else
	{
		if(p1[1]>p2[1])
		return 1;
		else if(p1[1]<p2[1])
		return -1;
	}
}
int main()
{
	char a[1005];
	int i,b[30]={0};
	double c[30]={0},d[30][3]={0},sum=0;
	scanf("%s",&a);
	int len=strlen(a);
	for(i=0;i<len;i++)
	{
		b[(a[i]-'a')]++;
	}
	for(i=0;i<26;i++)
	{
		c[i]=1.0*b[i]/len;
	}
	for(i=0;i<26;i++)
	{
		d[i][0]=-(log(c[i])/log(2));
		d[i][1]=i;
	}
	for(i=0;i<26;i++)
	{
		sum+=c[i]*d[i][0];
	}
	printf("%.2lf\n",sum);
	qsort(d,26,sizeof(d[0]),cmp);
	for(i=0;i<10;i++)
	printf("%c:%.2lf\n",((int)d[i][1]+'a'),d[i][0]);
 	return 0;
}

