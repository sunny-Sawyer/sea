#define _CRT_SECURE_NO_WARNINGS
//假设密码是abcdef
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = {0};
	for (int i = 1;i <= 3;i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("密码正确，登陆成功\n");
			break;
		}
		else
			printf("密码错误，请重新输入:>\n");
	}
	return 0;
}