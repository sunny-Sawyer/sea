/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 9;
	for (;left <= right;)
	{
		int mid = (right - left) / 2 + left;
		if (arr[mid] < k)
			left = 1+mid;
		else if (arr[mid] > k)
			right = mid-1;
		else
		{
			printf("找到了%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到，寄了");
	return 0;
}*/