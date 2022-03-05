#include <stdio.h>
#include <math.h>
#include <string.h>
void suan(char max[],char min[],int maxlen,int minlen)
{
	char p[100];
	int i,j,l=0;
	for(i=maxlen-1,j=minlen-1;j>=0;i--,j--)
	{
		if(max[i]>min[j])
		p[l++]=max[i]-min[j]+'0';
		else if(max[i]<min[j])
		{
			p[l++]=10+max[i]-min[j]+'0';
			max[i-1]--;
		}
		else
		{
			if(i==0)
			continue;
			p[l++]='0';
		}
	}
	for(i=i;i>=0;i--)
	{
		if(max[i]>'0')
			p[l++]=max[i];
		else if(max[i]<'0')
		{
			max[i-1]--;
			p[l++]=10+max[i];
		}
		else
		{
			if(i==0)
			break;
			p[l++]=max[i];
		}
	}
	for(l--;p[l]=='0';l--)
	;
	for(l=l;l>=0;l--)
	{
		printf("%c",p[l]);
	}
}
int main()
{
	char a[100],b[100],*pa=NULL,*pb=NULL;
	int i,sign=1;
	scanf("%s%s",a,b);
	for(i=0;a[i]=='0';i++)
	;
	pa=&a[i];
	for(i=0;b[i]=='0';i++)
	;
	pb=&b[i];
	int alen=strlen(pa);
	int blen=strlen(pb);
	if(alen<blen) 
		{
			printf("-");
			sign=-1;
		}
	if(alen==blen)
	{
		for(i=0;pa[i]==pb[i]&&pa[i]!='\0'&&pb[i]!='\0';i++)
		;
		if(pa[i]>pb[i])
			sign=1;
		else if(pa[i]<pb[i]) 
			{
				printf("-");
				sign=-1;
			}
		else
		{
			printf("0\n");
			sign=0;
		}
	}
	if(sign==1)
		suan(pa,pb,alen,blen);
	else if(sign==-1)
		suan(pb,pa,blen,alen);
 	return 0;
}

