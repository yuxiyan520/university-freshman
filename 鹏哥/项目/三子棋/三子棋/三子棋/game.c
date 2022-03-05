#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "game.h"

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

void Printfboard(char board[ROW][COL],int row,int col)
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

void Playermove(char board[ROW][COL],int row,int col)
{
	int x, y;
	printf("��һغϣ�");
	while (1)
	{
		printf("�����壨������������Ϊ�������꣩\n");
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
				printf("��λ���ѱ�ռ\n");
			}
		}
		else
		{
			printf("���벻�Ϸ�\n");
		}
	}
}

void Computermove(char board[ROW][COL],int row,int col)
{
	printf("���Իغϣ�\n");
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
//���ʤ-#
//����ʤ-*
//ƽ��-P
//����-C
char Iswin(char board[ROW][COL], int row, int col)
{
	int i, j,flag=0;
	//һ��һ��
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
	//һ��һ��
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row-1; i++)
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
	//б��һ��
	for (i = 0,j=0; i < row-1,j<col-1; i++,j++)
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
	for (i = 0, j = col-1; i < row - 1; i++, j--)
	{
		if (board[i][j] != board[i + 1][j - 1])
		{
			break;
		}
	}
	if (i == row - 1)
	{
		return board[0][col-1];
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