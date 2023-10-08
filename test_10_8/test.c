#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a = 3.14;
	printf("%.2f\n",a);
	printf("\n");
	for (int i = 65; i < 65 + 26; i++)
	{
		printf("%c:%d\n", (char)i,i);
		printf("\n");
	}
	for (int i = 97; i < 97 + 26; i++)
	{
		printf("%c:%d\n",(char)i,i);
		printf("\n");
	}
	return 0;
}