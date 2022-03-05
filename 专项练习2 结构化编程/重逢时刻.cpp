#include <stdio.h>

int main()
{
  int n;
  double b,c;
  scanf("%d",&n);
  n=n%12;
  if(n!=11)
  {
  b=(60.0*n)/11.0;
  c=(b-(int)b)*60;
  printf("%d:%d:%.7lf",n,(int)b,c);
  }
  if(n==11)
  printf("0:0:0.0000000");
 return 0;
}

