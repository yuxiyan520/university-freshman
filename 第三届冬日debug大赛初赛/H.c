#include <stdio.h>
#define maxn 1000+10

int maxSub(int[],int,int*,int*);

int main() {
	int n;
	int a[maxn];
	while(scanf("%d",&n) != EOF){
		for(int i=1;i<=n;++i)
			scanf("%d",&a[i]);
		int l,r;
		maxSub(a,n,&l,&r);
		printf("%d %d %d\n",maxSub(a,n,&l,&r),l,r);
	}
	return 0;
}

int maxSub(int a[],int n,int *l,int *r){
	int Max=-1000000000;
	for(int i=1;i<=n;++i)
	{
		int sum=0;
		for(int j=i;j<=n;++j)
		{
			sum+=a[j];
			if(sum>Max)
			{
				Max=sum;
				*l=i;
				*r=j;
			}
		}
	}
	return Max;
}
