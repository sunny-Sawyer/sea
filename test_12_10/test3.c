#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void select_sort(int num[], int n)
//{
//	int i, j, k, t,m;
//	for (i = 0;i < n-1 ;i++) 
//	{
//		k = i;
//		for (j = i + 1;j < n;j++) 
//		{
//			if (num[k]>num[j])
//				k = j;
//		}
//		if (k != i) 
//		{
//			t = num[i];
//			num[i] = num[k];
//			num[k] = t;
//		}
//		for (m = 0;m < n;m++) 
//		{
//			printf("%d ", num[m]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 5;
//	int a[5], i;
//	printf("请依次输入要排序的数：\n");
//	for (i = 0;i < n;i++) 
//	{
//		scanf("%d", &a[i]);
//	}
//	select_sort(a, n);
//	printf("\n");
//	printf("从小到大的排序为：\n");
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

	/*int b = 20;
	int c = 30;
	int* pa[10] = { &a,&b,&c };
	for (int i = 0;i < 3;i++)
	{
		printf("%d ",*pa[i]);
	}*/
	/*char* pa =  & a;
	*pa = 0;
	printf("%p\n", &a);
	printf("%p\n", &a-1);
	printf("%p\n", pa);
	printf("%p\n",pa-1);*/
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//int* pa = arr+1;
	//int* pb = NULL;
	//if (pb != NULL)//判断野指针
	//{
	//	*pb = 10;
	//}
	/*int arr[10];
	printf("%p\n",&arr[9]);
	printf("%p\n", &arr[0]);
	return 0;*/
int main()
{
	int a[4] = {1,2,3,4};
	int b[4] = {2,3,4,5};
	int c[4] = {3,4,5,6};
	int* pa[3] = { a,b,c };
	printf("%p\n",&pa[1]);
	printf("%p\n", *(pa+1));
	printf("%p\n",&b[0]);
	printf("%p\n", b);
	/*for (int i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ",*(*(pa+i)+j));
		}
		printf("\n");
	}*/
	return 0;
}