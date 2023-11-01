/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float n = 2.0;
	float m = 1.0;
	float sum = 0.0;
	float k = 0.0;
	int i = 0;
	for (i = 1;i <= 20;i++)
	{

		sum += (n / m);
		k = m;
		m = n;
		n += k;
	}
	printf("%f\n",sum);

	return 0;
}*/