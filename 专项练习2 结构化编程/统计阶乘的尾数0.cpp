#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  if(n<5)
  printf("%d",n+1);
  if(n>4 && n<10)
  printf("5");
  if(n>=10 && n<15)
  printf("%d",n-4);
  if(n>=15 && n<20)
  printf("10");
  if(n>=20)
  printf("%d",n-9);
 return 0;
}

