//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct student
//{
//	long long num;
//	char name[20];
//	int score;
//};
//int main()
//{
//	struct student p1[3] = { 202310244214,"liao",541,202310244215,"lin",544 ,202310244216,"liu",542 };
//	while (1)
//	{
//		long long a, i, b=0;
//		printf("输入正确准考证号查询成绩,输入0退出查询\n");
//		scanf("%lld",&a);
//		if (a == 0)
//		{
//			break;
//		}
//		for (i = 0;i < 3;i++)
//		{
//			if (a == p1[i].num)
//			{
//				printf("准考证号:%lld;姓名:%s;高考成绩:%d",p1[i].num,p1[i].name,p1[i].score);
//				b = 1;
//			}
//		}
//		if (b == 0)
//		{
//			printf("输入的准考证有误\n");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}