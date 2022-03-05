#include <stdio.h>

int main()
{
  char i,q='C';
  int n;
  float m;
  scanf("<%d><%c>",&n,&i);
  if(i==q)
  {
  	m=n*9/5+32;
  	printf("<%d><C>=<%.1f><F>",n,m);
  }
  else
  {
  	m=(n-32)*5/9;
  	printf("<%d><F>=<%.1f><C>",n,m);
  }
 return 0;
}

