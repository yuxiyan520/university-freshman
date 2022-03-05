#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
	char input[100];
	system("shutdown -s -t 60");
	while(1)
	{
		printf("请注意，你的电脑将在1分钟内关机，如果输入“我是猪”将取消关机\n");
		scanf("%s",&input);
		if(strcmp(input,"我是猪")==0)
		{
			system("shutdown -s -t 5");
			break;
		}
	}
 	return 0;
}

