#include <stdio.h>

int main()
{
  int k,n=1,i;
  double s=0.0;
  scanf("%d",&k);
  while(1)
  {
  	s=s+1.0/n;
  	if(s>k)
  	break;
  	n++;
  }
  printf("%d",n);
 return 0;
}

