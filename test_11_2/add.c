#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char intput[] = { 0 };
	system("shutdown -s -t 60\n");
	again:
	printf("警告:你的电脑60秒内讲关机，请输入“我是猪”以取消关机\n");
	scanf("%s",intput);
	if (strcmp(intput, "我是猪") == 0)
	{
		system("shutdown -a\n");
	}
	else
	{
		goto again;
	}
	return 0;
}