#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int len,y,x;
	char a[10];
	while((scanf("%s",&a))!=EOF)
	{
		len=strlen(a);
		if(a[0]==38)//&a,&a+y,&a[x],&[a]+y
		{
			if(len==2)//&a
			{
				printf("0x00000000\n");
			}
			else if(a[2]=='+')//&a+y
			{
				sscanf(a,"&a+%d",&y);
				y*=400;
				printf("0x%08x\n",y);	
			}
			else if(a[2]=='['&&a[len-1]==']')//&a[x]
			{
				sscanf(a,"&a[%d]",&x);
				x*=4;
				printf("0x%08x\n",x);
			}
			else//&a[x]+y
			{
				sscanf(a,"&a[%d]+%d",&x,&y);
				x=(x+y)*4;
				printf("0x%08x\n",x);
			}
		}
		else
		{
			if(len==1)//a
			{
				printf("0x00000000\n");
			}
			else//a+y 
			{
				sscanf(a,"a+%d",&y);
				y*=4;
				printf("0x%08x\n",y);
			}
		}
	}
 	return 0;
}

