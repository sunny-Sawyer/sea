#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = {'a','b','c','d','e','f','\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));


	return 0;
}