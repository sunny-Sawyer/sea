#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 99)
	{
		if (1 == i % 2)
			printf("%d ",i);
		i++;
	}
	int day = 0;
	scanf_s("%d", &day);
	/*if (day == 1)
		printf("����һ");
	else if (day == 2)
		printf("���ڶ�");
	else if (day == 3)
		printf("������");
	else if (day == 4)
		printf("������");
	else if (day == 5)
		printf("������");
	else if (day == 6)
		printf("������");
	else 
		printf("������");*/
	switch(day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		break;

	}
	int num = 0;
	scanf_s("%d\n",&num);
	if (1 == num % 2)
		printf("����\n");
	else
		printf("������\n");

	return 0;
}