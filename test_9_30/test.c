#include<stdio.h>
int main()
{
	float a  = 9 / 2.0;//小数除法
	printf("%f\n",a);
	int b = 9 % 2;//取模
	printf("%d\n",b);
	int c = 2;//左移操作符
	int d = c << 1;
	printf("%d\n",d);
	int e = 2;//复合赋值符
	e += 3;
	printf("%d\n",e);
	int f = 0;
	printf("%d\n",!f);//!把真变假，把假变真
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
	printf("%d\n",sz);

	return 0;
}