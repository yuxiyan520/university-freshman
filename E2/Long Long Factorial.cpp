#include <stdio.h>

int main()
{
  int n,i,num,x;
  while(scanf("%d",&n)!=EOF)
  {
  	for(i=5,num=0;n/i!=0;i*=5)
  	{
  		num=num+n/i;
	  }
	  printf("%d\n",num);
  }
 return 0;
}
