#include<stdio.h>
int main()
{
	float a  = 9 / 2.0;//С������
	printf("%f\n",a);
	int b = 9 % 2;//ȡģ
	printf("%d\n",b);
	int c = 2;//���Ʋ�����
	int d = c << 1;
	printf("%d\n",d);
	int e = 2;//���ϸ�ֵ��
	e += 3;
	printf("%d\n",e);
	int f = 0;
	printf("%d\n",!f);//!�����٣��Ѽٱ���
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
	printf("%d\n",sz);

	return 0;
}