/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int i = 0, k = 4;
	while (left <= right) 
	{
		int mid = (left + right) / 2;
		if (k > arr[mid])
			left = mid + 1;
		else if (k < arr[mid])
			right = mid - 1;
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
		if (left > right)
			printf("找不到");
	}
	return 0;
}*/