#define _CRT_SECURE_NO_WARNINGS 1
#include "wenzi.h"

void color(short x)	//�Զ��庯���ݲ����ı���ɫ 
{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x); 
}

int first()
{
	int input,flag;
	printf("��ã�\n");
	printf("�鿴��ҵ��Ҫ������������֤���\n");
	printf("����ͨ��С��Ϸ�������塱���������\n");
	printf("�Ƿ��ã����ǣ�1  ��0��\n");
	do
	{
		scanf("%d", &input);
		if (input == 1)
		{
			//��ʼ��Ϸ
			flag=test();
			return flag;
		}
		else if (input == 0)
		{
			//������ҵ
			printf("�õģ���ֱ�Ӹ���100��\n");
			Sleep(1500);
			printf("����Ц���������룬������Ϸ�ɣ�\n");
			Sleep(1000);
			flag = test();
			return flag;
		}
		else
		{
			printf("���벻�Ϸ�������������\n");
		}
	} while (input != 0 && input != 1);
}

void second(int flag)
{
	char password[20];
	if (flag == 1)//��һ�ػ�ʤ��
	{
		second1:
		printf("�ܰ�������ϲ����Ի������\n");
		printf("����Ϊ��123456\n");
		Sleep(2000);
		system("cls");
		printf("���������룺\n");
		while (1)
		{
			scanf("%s", &password);
			if (strcmp(password, "123456") == 0)
			{
				color(4);
				printf("   �������棡��\n");
				printf("   ���������\n");
				color(15);
				break;
			}
			else
			{
				printf("�����������������\n");
			}
		}
		Sleep(1500);
		printf("����ɣ�����ɣ��������������Ϊ�һ��������ɣ�\n");
		Sleep(2000);
		printf("���ˣ������������ɣ�\n");
		Sleep(2000);
		system("cls");
	}
	else//��һ��ʧ����
	{
		printf("���ϧ\n");
		printf("������Ҫ��ס��ʧ���˳ɹ�֮ĸ\n");
		printf("�����Ҵӿ�ʼ�Ӵ����赽���ڿ������һЩС���⣬�����Ǵ�һ��һ����ʧ����������ô\n");
		do
		{
			printf("���ͣ�����Ե�\n");
			printf("����������һ�Σ�������һ�����Ե�\n");
			flag = test();
		} while (flag != 1);
			goto second1;
	}

}

void third()
{
	system("color 70");
	printf("E9-2021��������ƻ���      ");
	color(39 | 2048);
	printf("ABCDEF");
	color(71 | 2048);
	printf("GHIJ\n");
	color(112);
	printf("�ھŴ���ϰ\n");
	printf("���                  ");
	color(116);
	printf("G ");
	color(113);
	printf("���㹲��                  ");
	color(116);
	printf("WA\n");
	color(23);
	printf("��Ŀ      ");
	color(119);
	printf("                                        ");
	color(116);
	printf("WA\n");
	color(112);
	printf("����                                              ");
	color(116);
	printf("WA\n");
	color(112);
	printf("�ҵ��ύ                                          ");
	color(116);
	printf("WA\n");
	color(112);
	printf("����&&����                                        ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  $@^%&*#&*#@*@$*&#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  :):;^%^%#%&@}{\"?(^&^               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  }(}$@^%^%#&#%$@%&:|&#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  ^~$~${\":?><{|\\*#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  $@^<>>?/;'\\[';&#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  [';&#&~${\":?><{| \n");
	printf("                  [';&#&~$&#^*$&^%#^\n");
	printf("                  >{\"{\":P>{:P:*$^&^#^");
	printf("\n\n\n\n\n\n\n\n");
	Sleep(2000);
	printf("�Ƿ񻹼ǵ�������Ϥ�Ļ���\n");
	Sleep(1500);
	printf("����һ����һ����Ŀ\n");
	Sleep(1500);
	printf("�Ҵ�һ��С�׿�ʼѧϰ\n");
	Sleep(1500);
	printf("�𽥳ɳ�Ϊ��һ��������Ű�Ĵ��\n");
	Sleep(1500);
	printf("���ǣ���������һ��������Ĵ��룬һ�δο���  ");
	Sleep(2000);
	printf("�����ҳ�Ϊ���ڸ��õ��Ұ�\n");
	Sleep(1500);
	printf("��л������ʶ��C���ԣ����ҿ�����һЩС������һЩϲ���Ķ���\n");
	Sleep(2500);
	printf("һѧ��ת�۾͹�ȥ�ˣ����ǣ�ѧϰ֮·��δֹ��\n");
	Sleep(2000);
	printf("�һ���·��         ");
	Sleep(1000);
	printf("����!!!");
	Sleep(1500);
}

void Finally()
{
	int  i, j, k, l, m, q=15;
	char c = 35;
	color(7);
	system("cls");
	printf("��ô����ᣡ\n");
	Sleep(1000);
	while (q--)
	{
		system("cls");
		color(q);
		printf("\n");
		for (i = 1; i <= 3; i++)
		{
			for (j = 1; j <= 32 - 2 * i; j++)  printf(" ");
			for (k = 1; k <= 4 * i + 1; k++)  printf("%c", c);
			for (l = 1; l <= 13 - 4 * i; l++)  printf(" ");
			for (m = 1; m <= 4 * i + 1; m++)  printf("%c", c);
			printf("\n");
		}
		for (i = 1; i <= 3; i++)
		{
			for (j = 1; j <= 24 + 1; j++)   printf(" ");
			for (k = 1; k <= 29; k++)   printf("%c", c);
			printf("\n");
		}
		for (i = 7; i >= 1; i--)
		{
			for (j = 1; j <= 40 - 2 * i; j++)  printf(" ");
			for (k = 1; k <= 4 * i - 1; k++)  printf("%c", c);
			printf("\n");
		}
		for (i = 1; i <= 39; i++)    printf(" ");
		printf("%c\n", c);
		for (i = 1; i <= 5; i++)    printf("\n");
		Sleep(300);
	}
	color(7);
	system("cls");
	printf("   �ߺ�    ����    \n");
	printf("��ʾ������С���ۿ�\n");
	Sleep(2000);
	i = 2500;
	while (i--)
	{
		color(1);    printf(" 0\t\t  ");
		color(2);    printf(" 0\t0 ");
		color(3);    printf(" 11\t\t\t\t\t\t\t\t\t\t ");
		color(4);    printf(" 00\t\t ");
		color(5);    printf(" 1\t\t\t\t\t\t\t ");
		color(6);    printf(" 00 ");
		color(7);    printf(" 11 \t\t");
		color(8);    printf(" 010 ");
	}
	color(7);
	printf("\n");
	Sleep(2000);
	system("cls");
	printf("                 ***\n                  ***\n                   ***\n\n");
	printf("	*****************************\n");
	printf("	*****************************\n");
	printf("	***                      ***\n");
	printf("	***    ***********      ***\n");
	printf("               ***********\n");
	printf("\n");
	printf("	 *************************\n");
	printf("	 *************************\n");
	printf("	       ***	 ***\n");
	printf("               ***	 ***\n");
	printf("	      ***	 ***\n");
	printf("	     ***	  ***	  **\n");
	printf("	    ****          *********\n");
	printf("	   ****	            *****\n");
}