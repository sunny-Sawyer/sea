#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define counts 79
void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void display(char board[ROW][COL], int row, int col);
void set(char board[ROW][COL], int row, int col);
void find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_count(char mine[ROWS][COLS], int x, int y);


