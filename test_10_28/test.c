#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	int max = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	//假设arr[0]是最大值
	max = arr[0];
	i = 1;
	while (i<4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		i++;
	}
	printf("%d\n",max);
	return 0;
}