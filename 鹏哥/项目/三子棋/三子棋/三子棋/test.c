#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "game.h"

int main()
{
	test();
	return 0;
}

void menu()
{
	printf("*************************\n");
	printf("********��������Ϸ*******\n");
	printf("******1.game 2.exit******\n");
	printf("*************************\n");
		
}

void game()
{
	char ret;
	//����
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Printfboard(board, ROW, COL);
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		Printfboard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret == '*')
		{
			printf("���ʤ��\n");
			break;
		}
		if (ret == '#')
		{
			printf("����ʤ��\n");
			break;
		}
		if (ret == 'P')
		{
			printf("ƽ��\n");
			break;
		}
		//��������
		Computermove(board, ROW, COL);
		Printfboard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret == '*')
		{
			printf("���ʤ��\n");
			break;
		}
		if (ret == '#')
		{
			printf("����ʤ��\n");
			break;
		}
		if (ret == 'P')
		{
			printf("ƽ��\n");
			break;
		}
	}

}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺1����ʼ��Ϸ����0���˳���\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("���벻�Ϸ�\n");
		}
	}
		while (input); 
}