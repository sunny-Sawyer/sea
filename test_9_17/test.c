#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input = 0;
	printf("�������\n");
	printf("Ҫ�ú�ѧϰ��(1/0)?");
	scanf_s("%d", &input);
	if (input == 1)
	{
		printf("��offer\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}