#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 400 == 0)
		{
			printf("%d��������\n", year);
		}
		else if(year % 100 != 0)
			printf("%d��������\n", year);
		else
		{
			printf("%d������\n",year);
		}
	}
	else
	{
		printf("%d�겻������\n", year);
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	char s1[80] = { 0 }, s2[40] = {0};
	int i = 0, j = 0;
	printf("�������һ���ַ���:\n");
	gets(s1);
	printf("������ڶ����ַ���:\n");
	gets(s2);
	while (s1[i++] != '\0');
	i--;
	while ((s1[i++] = s2[j++]) != '\0');
	printf("%s\n",s1);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int arr[15] = { 0 };
	int i = 0;
	int number = 0;
	int mid = 0;
	printf("�����볤��Ϊ15������:\n");
	for (i = 0;i < 15;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("����Ҫ���ҵ���:\n");
	scanf("%d",&number);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		 mid = left + (right - left) / 2;
		 if (arr[mid] == number)
		 {
			 printf("�����������еĵ�%d��Ԫ�ص�ֵ\n", mid + 1);
			 break;
		 }
		if (arr[mid] > number)
			left = mid + 1;
		if (arr[mid] < number)
			right = mid - 1;
	}
	if(left > right)
		printf("�޴���\n");
	return 0;
}