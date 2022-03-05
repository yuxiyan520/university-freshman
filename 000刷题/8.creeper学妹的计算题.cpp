#include <stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  for(t;t>0;t--)
  {
  int a,b,c,d,e,f,g,h;
  scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
  printf("%d\n",(a*c)/b+(d*g*h)/(e*f));
  }
 return 0;
}
