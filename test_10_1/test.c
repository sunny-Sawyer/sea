#include<stdio.h>
int main()
{;
	int a = 0;
	printf("%d\n",~a);
	int b = 1;
	int c = ++b;
	printf("%d\n", c);
	int x = 1;
	int d = x++;
	printf("%d\n",d);
	int y = (int)3.14;
	printf("%d\n",y);
	int n = 3;
	int m = 0;
	printf("%d\n",n && m);
	printf("%d\n",n || m);
	int max = a > b ? a : b;
	printf("%d\n",max);
	int z = (a = b + 2, c = a - 4, b = c + 2);
	printf("%d\n",z);


	return 0;
}