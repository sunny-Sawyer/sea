#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int password[10] = { 0 };
	int ch = 0;
	int a = 0;
	printf("���������룺");
	scanf("%s",&password);
	printf("����Ϊ%s��ȷ����Y/N\n",password);
	while(a = getchar()!='\n')
	{
		;
	}
	ch = getchar();
	if ( ch == 'Y')
		printf("YES");
	else
		printf("NO");
	return 0;
}
