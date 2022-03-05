#include <stdio.h>

int main()
{
	int n,m,n1,n2,n3,n4;
	scanf("%d",&n);
	n1=(n<<24)&(~((1<<24)-1));
	n2=((n>>8)&((1<<8)-1))<<16;
	n3=((n>>16)&((1<<8)-1))<<8;
	n4=(n>>24)&((1<<8)-1);
	m=n1|n2|n3|n4;
	printf("%d",m);
 	return 0;
}

