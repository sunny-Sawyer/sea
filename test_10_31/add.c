#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 11;
	int i = 0;
	/*while (i <= (sz - 1))
	{
		if (k == arr[i])
		{
			printf("找到了，下标是%d", i);
			break;
		}
		i++;
	}*/
	for (i = 0;i <= (sz - 1);i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是%d", i);
			break;
		}
		
	}
	if (i == sz)
		printf("找不到");
	return 0;
}