#define _CRT_SECURE_NO_WARNINGS
//����������abcdef
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = {0};
	for (int i = 1;i <= 3;i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("������ȷ����½�ɹ�\n");
			break;
		}
		else
			printf("�����������������:>\n");
	}
	return 0;
}