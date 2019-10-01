#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initboard(char board[][ROWS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j<col; j++)
		{
			board[i][j] = set;
		}
	}
}
void Printboard(char board[][ROWS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char mine[][ROWS], int row, int col)
{
	int count = Mine_Num;
	while (count)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int  GetMine(char board[][ROWS],int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1]
		+ board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1]
		+ board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}
void FindMine(char mine[][ROWS], char show[][ROWS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 1;
	while (count <= (row*col - Mine_Num))
	{
		printf("请输入你的坐标：");
		scanf("%d %d", &x, &y);
		if (mine[x][y] == '1')
		{
			printf("您被炸死了\n");
			Printboard(mine, ROW, COL);
			break;
		}
		else
		{
			show[x][y] = GetMine(mine, x, y) + '0';
			Printboard(show, ROW, COL);
		}
		count++;
	}
	if (count > row*col - Mine_Num)
	{
		printf("恭喜您，您赢了\n");
	}
}