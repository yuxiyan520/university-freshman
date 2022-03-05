#include <stdio.h>

int main()
{
  int x,i;
  char ch;
  scanf("%c %d",&ch,&x);
  for(i=0;i<x;i++)
  {
  	if(ch<='z' && ch>='a' && ch+x>'z')
  	{
  		printf("OverfIow!");
  		break;
	  }
	if(ch<='Z' && ch>='A' && ch+x>'Z')
  	{
  		printf("OverfIow!");
  		break;
	  }
	if(ch<'A' || (ch>'Z' && ch<'a') || ch>'z')
	{
		printf("Not a Letter");
		break;
	}
	printf("%c ",ch+i);
  }
  return 0;
}

