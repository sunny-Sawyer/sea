#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int is_printf(n)
{
	for (int j = 2;j <= sqrt(n);j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int count = 0;
	for (int i = 101;i <= 200;i += 2)
	{
		
		if (is_printf(i))
		{
			printf("%d  ",i);
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}