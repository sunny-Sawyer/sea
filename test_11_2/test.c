#define _CRT_SECURE_NO_WARNINGS
//1.���������
//2.�������
//3.�ж�
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
		printf("�������:>");
		scanf("%d", &guess);

		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
	//printf("��սʧ��\n");
}
int main()
{
	int intput = 0;
	
	do
	{
	srand((unsigned int)time(NULL));
	menu();
	printf("������:>");
	scanf("%d",&intput);
	switch (intput)
	{
	case 1:
		printf("������\n");
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("�����������������\n");
		break;
	}
	} while (intput);
	return 0;
}*/
