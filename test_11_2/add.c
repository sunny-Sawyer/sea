#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char intput[] = { 0 };
	system("shutdown -s -t 60\n");
	again:
	printf("����:��ĵ���60���ڽ��ػ��������롰��������ȡ���ػ�\n");
	scanf("%s",intput);
	if (strcmp(intput, "������") == 0)
	{
		system("shutdown -a\n");
	}
	else
	{
		goto again;
	}
	return 0;
}