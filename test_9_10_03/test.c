#include<stdio.h>
int main()
{
	printf ("%s\n","abcd\\0ef");
	printf("\a");
	printf("abc\ndef\n");
	printf("%d\n",strlen("abcd t"));

	return 0;
}