#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
	char input[100];
	system("shutdown -s -t 60");
	while(1)
	{
		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������롰��������ȡ���ػ�\n");
		scanf("%s",&input);
		if(strcmp(input,"������")==0)
		{
			system("shutdown -s -t 5");
			break;
		}
	}
 	return 0;
}

