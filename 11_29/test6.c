#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m = 0, n = 0;
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;
	float a[2][2] = {60,70,80,90};
	float b[2][2] = {70,80,90,50};
	float c[2][2] = {80,90,100,70};
	printf("a学生的成绩 ");
	for (m = 0;m < 2;m++)
	{
		for (n = 0;n < 2; n++)
		{
			printf("%f ", a[m][n]);
			sum1 = sum1 + a[m][n];
		}
	}
	printf("\n");
	printf("b学生的成绩 ");
	for (m = 0;m < 2;m++)
	{
		for (n = 0;n < 2;n++)
		{
			printf("%f ", b[m][n]);
			sum2 = sum2 + b[m][n];
		}
	}
	printf("\n");
	printf("c学生的成绩 ");
	for (m = 0;m < 2;m++)
	{
		for (n = 0;n < 2;n++)
		{
			printf("%f ", c[m][n]);
			sum3 = sum3 + c[m][n];
		}
	}
	printf("\n");
	printf("a的总成绩为%f，b的总成绩为%f，c的总成绩为%f\n", sum1, sum2, sum3);
	printf("a的平均成绩为%f，b的平均成绩为%f，c的平均成绩为%f\n", sum1 / 4.0, sum2 / 4.0, sum3 / 4.0);
	printf("三个学生的总平均成绩为%f\n", (sum1 + sum2 + sum3) / 12.0);
	return 0;
}
