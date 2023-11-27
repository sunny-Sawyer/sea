#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "echo";
	int ch = 111;
	char* p = strchr(arr, ch);
	printf("%s\n", p);
	return 0;
}