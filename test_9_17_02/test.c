#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	//��������
	int line = 0;
	while (line < 30000)
	{
		printf("�����:%d\n",line);
		line++;
	}
	if (line >= 30000)
	{
		printf("��offer\n");
	}
	
	return 0;
}