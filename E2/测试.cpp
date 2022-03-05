#include <stdio.h>

int main()
{
  int n,i,num,x;
  while(scanf("%d",&n)!=EOF)
  {
  	for(i=5,num=0;i<=n;i+=5)
  	{
  		x=i;
  		while(x%5==0)
  		{
  			num++;
  			x/=5;
		  }
	  }
	  printf("%d\n",num);
  }
 return 0;
}
