#include<stdio.h>
int main()
{
	printf("%c\n",'\130');
	printf("%c\n",'\x65');
	printf("%d\n", strlen("c\test\628\test.c"));

	return 0;
}