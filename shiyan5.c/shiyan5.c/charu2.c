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
//	//�Ҵ�����Ԫ���������е�λ��-�Ӻ���ǰ�����в���
//	while (end >= 0 && c < a[end])
//	{
//		a[end + 1] = a[end];//��һ�ˣ���a��8���е�Ԫ�ر����������ʱ����a��8���Ƶ�a��9����Ҳ����˵����ѭ��������Ͱ�����������������Ųһλ
//		end--;
//	}
//	a[end + 1] = c;//����Ԫ�ص��ҵ���λ��
//	for (i = 0; i < 10; i++)
//		printf("%d", a[i]);
//	printf("\n");
//	return 0;
//}
