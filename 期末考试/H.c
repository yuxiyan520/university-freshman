#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
char a[3005][3005];
void f1(char a[3005][3005],int n,int hang,int lie)
{
	char m;
	int i,j;
	sprintf(m,"%%%ds",lie);
	for(j=0;j<=hang;j++)
	{
		for(i=0;i<lie;i++)
		printf(" ");
		printf("%s\n",a[j]);
	}
	for(j=0;j<=hang;j++)
	{
		printf(m,a[j]);
		printf(m,a[j]);
		printf("%s\n",a[j]);
	}
	for(j=0;j<=hang;j++)
	{
		for(i=0;i<lie;i++)
		printf(" ");
		printf("%s\n",a[j]);
	}
}

int main()
{
	int n,i=0,lie=0;
	scanf("%d",&n);
	while((gets(a[i])!=NULL))
	{
		i++;
	}
	int hang=i-1;
	for(i=0;i<=hang;i++)
	{
		if(strlen(a[i])>lie)
		lie=strlen(a[i]);
	}
	if(a[0][0]!=' ')
	{
		f1(a,n,hang,lie);
	}
 	return 0;
}

