#include <stdio.h>

int main()
{
	char c;
	int n=0,i=1;
	while(c=getchar())
	{
		if(c=='!')
		break;
		if(c!='r'&&c!='g'&&c!='b')
		{
			n++;
			continue;
		}
		if(c=='r'&&i==1)
		{
			continue;
		}
		else if(c=='r')
		{
			n++;
			continue;
		}
		else if(c=='g'&&(i==1||i==2))
		{
			i=2;
			continue;
		}
		else if(c=='g')
		{
			n++;
			continue;
		}
		else if(c=='b'&&(i==1||i==2||i==3))
		{
			i=3;
			continue;
		}
		else if(c=='b')
		{
			n++;
			continue;
		}
	}
	printf("%d",n);
 	return 0;
}

