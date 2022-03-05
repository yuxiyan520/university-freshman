#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("********三子棋游戏*******\n");
	printf("******  play game  ******\n");
	printf("*************************\n");

}

int game()
{
	char ret;
	//棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Printfboard(board, ROW, COL);
	printf("注意：坐标为数学坐标，如第一个格为1 1\n");
	printf("（只需要输入横纵坐标即可，以空格隔开）\n");
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		Printfboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret == '*')
		{
			printf("恭喜你胜利了\n");
			return 1;
		}
		if (ret == '#')
		{
			printf("哎呀，这么容易就失败了呢\n");
			return -1;
		}
		if (ret == 'P')
		{
			printf("平局，还要加油呀\n");
			return 0;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		Printfboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret == '*')
		{
			printf("恭喜你胜利了\n");
			return 1;
		}
		if (ret == '#')
		{
			printf("哎呀，这么容易就失败了呢\n");
			return -1;
		}
		if (ret == 'P')
		{
			printf("平局，还要加油呀\n");
			return 0;
		}
	}
}

int test()
{
	int flag;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		flag=game();
	} while (!flag);
	return flag;
}

void Initboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Printfboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家回合：");
	while (1)
	{
		printf("请下棋（输入两个数作为落子坐标）\n");
		scanf("%d%d", &x, &y);
		if (x>0 && y>0 && x <= row&&y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占\n");
			}
		}
		else
		{
			printf("输入不合法\n");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑回合：\n");
	int x, y;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		else
		{
			continue;
		}
	}
}
//玩家胜-#
//电脑胜-*
//平局-P
//继续-C
char Iswin(char board[ROW][COL], int row, int col)
{
	int i, j, flag = 0;
	//一行一样
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] != board[i][j + 1])
			{
				break;
			}
		}
		if (j == col - 1)
		{
			return board[i][0];
		}
	}
	//一列一样
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 1; i++)
		{
			if (board[i][j] != board[i + 1][j])
			{
				break;
			}
		}
		if (i == row - 1)
		{
			return board[0][j];
		}
	}
	//斜着一样
	for (i = 0, j = 0; i < row - 1, j<col - 1; i++, j++)
	{
		if (board[i][j] != board[i + 1][j + 1])
		{
			break;
		}
	}
	if (i == row - 1)
	{
		return board[0][0];
	}
	for (i = 0, j = col - 1; i < row - 1; i++, j--)
	{
		if (board[i][j] != board[i + 1][j - 1])
		{
			break;
		}
	}
	if (i == row - 1)
	{
		return board[0][col - 1];
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		return 'P';
	}
	return 'C';
}