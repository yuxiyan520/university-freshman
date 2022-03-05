#include <stdio.h>
#include <math.h>

int main()
{
  float x1,x2,x3,y1,y2,y3,r;
  while(scanf("%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&r)!=EOF)
  {
  float m=(y2-y1)*(x3-x1)-(x2-x1)*(y3-y1);
  if(m<0)
  m=m*(-1);
  float n=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  float i=m/n;
  if(i>r)
  printf("0\n");
  if(i==r)
  printf("1\n");
  if(i<r)
  printf("2\n");
  }
 return 0;
}

