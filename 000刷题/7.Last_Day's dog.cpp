#include <stdio.h>

int main()
{
	int n,i;
  while(scanf("%d",&n)!=EOF)
  {
  	if(n<=30)
  	{
  	for(n,i=0;n>0;n--,i++)
  	{
  	for(int q=i;q>0;q--)
  	{
  		printf(" ");
	  }
  	int m=2*(n-1)+1;
  	for(m;m>0;m--)
  	printf("#");
  	printf("\n");
    }
    } 
  }
 return 0;
}

