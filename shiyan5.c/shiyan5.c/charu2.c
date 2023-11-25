#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int c = 0;
//	int a[10] = { 0, 1,2,3,4,6,7,8,9 };
//	int end = 8;
//	int i;
//	scanf("%d", &c);
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d", a[i]);
//
//	}
//	printf("\n");
//	//找待插入元素在数组中的位置-从后往前来进行查找
//	while (end >= 0 && c < a[end])
//	{
//		a[end + 1] = a[end];//第一趟：当a【8】中的元素比输入的数大时，将a【8】移到a【9】。也就是说进入循环条件后就把满足条件的数往后挪一位
//		end--;
//	}
//	a[end + 1] = c;//插入元素到找到的位置
//	for (i = 0; i < 10; i++)
//		printf("%d", a[i]);
//	printf("\n");
//	return 0;
//}
