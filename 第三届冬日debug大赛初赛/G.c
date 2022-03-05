#include<stdio.h>
int main(){
	int i,j,k,n1,n2;
	int a1[110],a2[110],ans[210];
	while(scanf("%d",&n1) != EOF){
		for(i=1;i<=n1;++i)scanf("%d",&a1[i]);
		scanf("%d",&n2);
		for(i=1;i<=n2;++i)scanf("%d",&a2[i]);
		k=0;
		for(i=1,j=1;i<=n1;++i){
			while(j<=n2&&a2[j]<a1[i]){
				ans[++k]=a2[j];
				j+=1;
			}
			ans[++k]=a1[i];
		}
		for(;j<=n2;++j){
			ans[++k]=a2[j];
		}
		for(i=1;i<=k;++i){
			printf("%d ",ans[i]);
		}
		putchar('\n');
	}
	return 0;
}
