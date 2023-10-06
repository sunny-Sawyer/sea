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
		printf("星期一");
	else if (day == 2)
		printf("星期二");
	else if (day == 3)
		printf("星期三");
	else if (day == 4)
		printf("星期四");
	else if (day == 5)
		printf("星期五");
	else if (day == 6)
		printf("星期六");
	else 
		printf("星期日");*/
	switch(day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		break;

	}
	int num = 0;
	scanf_s("%d\n",&num);
	if (1 == num % 2)
		printf("奇数\n");
	else
		printf("非奇数\n");

	return 0;
}