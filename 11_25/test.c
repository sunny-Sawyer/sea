#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char str[], int left, int right)
//{
//	char tmp = 0;
//	tmp = str[left];
//	str[left] = str[right];
//	str[right] = tmp;
//	if (left < right)
//	{
//		reverse(str, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char n[] = "abc";
//	int left = 0;
//	int right = my_strlen(n) - 1;
//	reverse(n, left, right);
//	printf("%s\n",n);
//	return 0;
//}