#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("********1.������Ϸ******\n");
    printf("********0.�˳���Ϸ******\n"); 
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
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���벻�Ϸ�������������\n");
			break;
		}
	} while (input);
	return 0;
}