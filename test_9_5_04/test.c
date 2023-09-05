extern int a;
#include<stdio.h>

void test()
{
	printf("%d--test\n", a);
}
int main()
{
	test();
	{
		printf("%d\n", a);
	}
	printf("%d\n", a);
	
	return 0;
}
