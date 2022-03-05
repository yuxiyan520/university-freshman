#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct people
{
	char name[11];
	int score;
}people;
people n[1001];
int cmp(const void *a,const void *b)
{
	people *c=(people *)a;
	people *d=(people *)b;
	if(d->score!=c->score)return d->score-c->score;
	return strcmp(c->name,d->name);
}
void Panduan(int num,int j)
{
	qsort(n,j+1,sizeof(n[0]),cmp);
	printf("%s %d\n",n[num-1].name,n[num-1].score);
}
int main()
{
	int q,i,j=0,num; 
	scanf("%d",&q);
	while((scanf("%d ",&i)!=EOF))
	{
		if(i==1)
		{
			scanf("%s%d",&n[j].name,&n[j].score);
			j++;
		}
		else
		{
			scanf("%d",&num);
			Panduan(num,j);
		}
	}
 	return 0;
}

