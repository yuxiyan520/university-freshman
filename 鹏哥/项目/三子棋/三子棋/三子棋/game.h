#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);
void Printfboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL],int row,int col);
void Computermove(char board[ROW][COL],int row,int col);
char Iswin(char board[ROW][COL], int row, int col);
void test();
void menu();
void game();