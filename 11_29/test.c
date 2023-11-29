//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int  i, flag=0;
//	char str1[100] = { "hello" };
//	char str2[100] = { "hello" };
//	printf("输入第一个字符串的内容:");
//	gets(str1);
//	printf("输入第二个字符串的内容:");
//	gets(str2);
//	for (i = 0; (str1[i] != '\0') && (str2[i] != '\0'); i++)
//	{
//		if (str1[i] == str2[i])
//		{
//			continue;
//		}
//		else
//		{
//			flag = str1[i] - str2[i];
//			break;
//		}
//	}
//	if (flag > 0)
//	{
//		printf("%s>%s",str1,str2);
//	}
//	else if (flag < 0)
//	{
//		printf("%s<%s", str1, str2);
//	}
//	else if(str1[i]=='\0'&&str2[i]!='\0')
//		printf("%s<%s", str1, str2);
//	else if (str1[i] != '\0' && str2[i] == '\0')
//		printf("%s>%s", str1, str2);
//	else
//		printf("%s=%s", str1, str2);
//	return 0;
//}
