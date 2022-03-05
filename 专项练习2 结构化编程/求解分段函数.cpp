#include <stdio.h>

int main()
{
  int x,y;
  scanf("%d",&x);
  if(x<1)
  printf("%d",x);
  if(x>=1 && x<10)
  {
  	y=2*x-3;
  	printf("%d",y);
  }
  if(x>=10)
  {
  	y=3*x-5;
  	printf("%d",y);
  }
 return 0;
}

