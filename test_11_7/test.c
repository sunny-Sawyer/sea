#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0;i < sz-1;i++)
	{
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
}
int main()
{
	int arr[] = { 10, 8, 9, 0, 7, 6, 5, 4, 2, 3, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}*/
int main()
{
	int i = 0;
	int j = 0;
	int arr[][4] = { {1,2,3},{3,4,5},1,2,3,4 };
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}