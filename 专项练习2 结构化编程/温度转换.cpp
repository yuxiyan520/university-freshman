#include <stdio.h>

int main()
{
  char i,q='C';
  int n;
  double m;
  scanf("<%d><%c>",&n,&i);
  if(i==q)
  {
  	m=n*9.0/5+32;
  	printf("<%d><C>=<%.1lf><F>",n,m);
  }
  else
  {
  	m=((float)n-32.0)*5.0/9.0;
  	printf("<%d><F>=<%.1lf><C>",n,m);
  }
 return 0;
}

