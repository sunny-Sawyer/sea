//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a[3][3] = { 100,200,300,400,500,600,700,800,900 };
//	int i, j, tmp;
//	printf("方针转置前\n");
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	i = 0;
//	for (j = 0;j < 3;j++)
//	{
//		if (i != j)
//		{
//			tmp = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = tmp;
//		}
//	}
//	printf("方针转置后\n");
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}