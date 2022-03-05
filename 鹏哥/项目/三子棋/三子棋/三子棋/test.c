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
	printf("********三子棋游戏*******\n");
	printf("******1.game 2.exit******\n");
	printf("*************************\n");
		
}

void game()
{
	char ret;
	//棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Printfboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		Printfboard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret == '*')
		{
			printf("玩家胜利\n");
			break;
		}
		if (ret == '#')
		{
			printf("电脑胜利\n");
			break;
		}
		if (ret == 'P')
		{
			printf("平局\n");
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		Printfboard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret == '*')
		{
			printf("玩家胜利\n");
			break;
		}
		if (ret == '#')
		{
			printf("电脑胜利\n");
			break;
		}
		if (ret == 'P')
		{
			printf("平局\n");
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
		printf("请输入：1（开始游戏）或0（退出）\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入不合法\n");
		}
	}
		while (input); 
}