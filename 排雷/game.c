#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int	j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int	j = 0;
	for (j = 0;j <= col;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void set(char board[ROWS][COLS], int row, int col)
{
	int count = counts;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x=0, y=0;
	int win = 0;
	while (win<row*col-counts)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("菜到炸弹，诈尸了\n");
				display(mine, ROW, COL);
				break;
			}
			else
			{
				win++;
				int count = get_count(mine, x, y);
				show[x][y] = count + '0';
				display(show, ROW, COL);
			}
		}
		else
			printf("输入的坐标非法\n");
	}
	if (win == row * col - counts)
	{
		printf("攻袭你,成攻了\n");
		display(mine, ROW, COL);
	}
}
int get_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x-1][y] + mine[x][y-1] + mine[x-1][y-1] + mine[x-1][y+1] + mine[x+1][y+1] + mine[x+1][y-1] + mine[x+1][y] + mine[x][y+1] - 8 * '0');
}