#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Mine_Num 10

void Initboard(char board[][ROWS], int row, int col, char set);
void Printboard(char board[][ROWS], int row, int col);
void SetMine(char mine[][ROWS], int row, int col);
void FindMine(char mine[][ROWS], char show[][ROWS], int row, int col);

#endif