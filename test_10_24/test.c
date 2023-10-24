#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int password[10] = { 0 };
	int ch = 0;
	int a = 0;
	printf("请输入密码：");
	scanf("%s",&password);
	printf("密码为%s你确定吗？Y/N\n",password);
	while(a = getchar()!='\n')
	{
		;
	}
	ch = getchar();
	if ( ch == 'Y')
		printf("YES");
	else
		printf("NO");
	return 0;
}
