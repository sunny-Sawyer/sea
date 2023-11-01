/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "I love you!";
	char arr2[] = "***********";
	int left = 0;
	int right = strlen(arr1) - 1;
	for (;left <= right;left++,right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s", arr2);
	return 0;
}*/