//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int m, n, i, k;
	int count = 0;
	char str1[100] = {"hello"};
	char str2[100] = {"hello"};
	printf("输入第一个字符串的内容:");
	gets(str1);
	m = strlen(str1);
	printf("输入第二个字符串的内容:");
	gets(str2);
	n = strlen(str2);
	k = m > n ? m : n;
	for (i = 0;i < k;i++)
	{
		if (str1[i] != str2[i])
		{
			printf("两个字符串不相等\n");
			count++;
			break;
		}
	}
	if (count == 0)
	{
		printf("两个字符串相等\n");
	}
	return 0;
}