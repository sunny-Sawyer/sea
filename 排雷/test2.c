#include"game.h"

void menu()
{
	printf("-------- 1.game---------\n");
	printf("-------- 0.exit---------\n");
}
void game()
{
	char show[ROWS][COLS] = {0};
	char mine[ROWS][COLS] = {0};
	initboard(show, ROWS, COLS, '*');
	initboard(mine, ROWS, COLS, '0');
	display(show, ROW, COL);
	//display(mine, ROW, COL);
	set(mine, ROW, COL);
	display(mine, ROW, COL);
	find(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("旋错了\n");
			break;
		}
	} while (input);
	return 0;
}