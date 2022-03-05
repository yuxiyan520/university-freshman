#include <stdio.h>
#include <stdlib.h>

int ddls[12][4];

int comp(const void* p1,const void* p2);

int main() {
	int n;
	while(scanf("%d",&n) != EOF){
		int i;
		for (i = 0;i < n;i++) {
			scanf("%d %d %d %d",&ddls[i][0],&ddls[i][1],&ddls[i][2],&ddls[i][3]);
		}
		qsort(ddls,sizeof(ddls)/sizeof(int),16,comp);
		printf("%d\n",ddls[0][0]);
	}
	return 0;
}

int comp(const void* p1,const void* p2) {
	if (((int *)p1)[1] < ((int *)p2)[1]) {
		return -1;
	}
	if (((int *)p1)[1] == ((int *)p2)[1] && ((int *)p1)[2] > ((int *)p2)[2]) {
		return -1;
	}
	if (((int *)p1)[1] == ((int *)p2)[1] && ((int *)p1)[2] == ((int *)p2)[2] && ((int *)p1)[3] > ((int *)p2)[3]) {
		return -1;
	}
	if (((int *)p1)[1] == ((int *)p2)[1] && ((int *)p1)[2] == ((int *)p2)[2] && ((int *)p1)[3] == ((int *)p2)[3] && ((int *)p1)[0] < ((int *)p2)[0]) {
		return -1;
	}
	return 1;
}
