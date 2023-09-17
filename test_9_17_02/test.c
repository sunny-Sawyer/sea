#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	//创建变量
	int line = 0;
	while (line < 30000)
	{
		printf("打代码:%d\n",line);
		line++;
	}
	if (line >= 30000)
	{
		printf("好offer\n");
	}
	
	return 0;
}