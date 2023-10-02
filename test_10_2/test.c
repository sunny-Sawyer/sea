#include<stdio.h>
typedef unsigned int uint;
test()
{
	static int b = 1;
	b++;
		printf("%d ",b);
}
int main()
{
	uint a = 10;
		printf("%d\n",a);
		int i = 0;
		while (i < 10)
		{
			test();
			i++;
		}
		register int d = 13;
	return 0;
}
