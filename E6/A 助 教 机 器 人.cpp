#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	while(gets(a)!=NULL)
	{
		if((strcmp(a,"���̣��ҵĴ��������ǶԵģ�Ϊʲô����ȥWA�ˣ�"))==0)
		printf("���ض��˾��Ƕ��ˣ�����ȥWA˵������������⡣\n");
		else if((strcmp(a,"���̣��ҵĴ���Ϊʲô����ȥ��������"))==0)
		printf("���Ե��ԡ�\n");
		else if((strcmp(a,"����,�ҵĴ���REG����ô���£�"))==0)
		printf("SIGESGV��Լ������Խ����,SIGFPE��Լ�ǳ������ˡ�\n");
		else if((strcmp(a,"�����ҵĴ���OE�ˡ�"))==0)
		printf("��Լ������Խ���ˡ�\n");
		else if((strcmp(a,"�����ҵĴ���CE�ˡ�"))==0)
		printf("�ٶ�һ�±�����Ϣ��\n");
		else if((strcmp(a,"�����ҵĴ���ʲô���������"))==0)
		printf("��������ѭ���ˣ������ʾprocess exited with return value 3221225477�ȷ����������԰ٶȰٶ�������ֵ�Я���Ĵ�����Ϣ��\n");
		else
		printf("PARDON?\n");
	}
 	return 0;
}

