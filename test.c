#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("********1.进入游戏******\n");
    printf("********0.退出游戏******\n"); 
	printf("************************\n");
}
void game()
{
	char show[ROWS][ROWS] = { 0 };
	char mine[ROWS][ROWS] = { 0 };
	Initboard(show,ROWS,COLS,'*');
	Initboard(mine, ROWS, COLS, '0');
	Printboard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
	Printboard(show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入不合法，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}