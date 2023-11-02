#define _CRT_SECURE_NO_WARNINGS
//1.生成随机数
//2.猜随机数
//3.判断
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************************\n");
	printf("***********   1.play  **************\n");
	printf("***********   0.exit  **************\n");
	printf("************************************\n");
}
void game()
{
	
	int ret = rand() % 100 + 1;
	int guess = 0;
	//for (int i = 1;i <= 5;i++)
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);

		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
	//printf("挑战失败\n");
}
int main()
{
	int intput = 0;
	
	do
	{
	srand((unsigned int)time(NULL));
	menu();
	printf("请输入:>");
	scanf("%d",&intput);
	switch (intput)
	{
	case 1:
		printf("猜数字\n");
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
	} while (intput);
	return 0;
}*/
