/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum = 0;
	int i = 0, j = 0, sz = 0;
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	printf("æÿ’Û\n");
	for (i = 0; i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (i == j)
			{
				sum += arr[i][j];
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}*/