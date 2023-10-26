
#include<stdio.h>
int main()
{
	int year, month, day;
	printf("请输入日期:");
	scanf_s("%4d %2d %2d",&year,&month,&day);
	if (year % 4 == 0 && year % 100 != 0||year%400 == 0)
	{
		switch (month)
		{
		case 1:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day,year,day);
			break;
		case 2:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31+day);
			break;
		case 3:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31+29+day);
			break;
		case 4:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31+29+31+day);
			break;
		case 5:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31+29+31+30+day);
			break;
		case 6:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31+29+31+30+31+day);
			break;
		case 7:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30+day);
			break;
		case 8:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31+day);
			break;
		case 9:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30+day);
			break;
		case 10:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 30+day);
			break;
		case 11:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 30 + 31+day);
			break;
		case 12:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 30 + 31 +30 +day);
			break;
		}
	}
	else
		switch (month)
		{
		case 01:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, day);
			break;
		case 02:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + day);
			break;
		case 03:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + day-1);
			break;
		case 04:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + day-1);
			break;
		case 05:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + day-1);
			break;
		case 06:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + day-1);
			break;
		case 07:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + day-1);
			break;
		case 8:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + day-1);
			break;
		case 9:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + day-1);
			break;
		case 10:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 30 + day-1);
			break;
		case 11:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 30 + 31 + day-1);
			break;
		case 12:
			printf("%4d年%02d月%02d日是%4d年的第%d天", year, month, day, year, 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 30 + 31 + 30 + day-1);
			break;
	}
return 0;
}