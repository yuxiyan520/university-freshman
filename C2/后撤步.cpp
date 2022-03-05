#include <stdio.h>
#include <math.h>
int main()
{
  int n,x0,y0,p,q,r,x,y,i,d;
  scanf("%d\n",&n);
  scanf("(%d,%d)\n",&x0,&y0);
  scanf("%d%d%d",&p,&q,&r);
  for(i=0;i<n;i++)
  {
  	getchar();
  	scanf("(%d,%d)",&x,&y);
  	x0=x0-x;
  	y0=y0-y;
  }
  d=sqrt((x0-p)*(x0-p)+(y0-q)*(y0-q));
  if(d<=r)
  printf("No way!");
  if(d>r)
  printf("(%d,%d)",x0,y0);
 return 0;
}



