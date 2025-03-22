#include <stdio.h>
#include <string.h>

int main()
{
	/*
		录入一个字符串，统计其中的大小写字符、数字字符的个数分别是多少
		*计数器思想：变量a; a++;
	*/
	printf("请输入一个字符串：\n");
	char str[100];
	scanf("%s", str);

	int lowerCount = 0;
	int upperCount = 0;
	int numberCount = 0;

	//遍历字符串
	for (int i = 0; i < strlen(str); i++)
	{
		char c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			lowerCount++;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			upperCount++;
		}
		else if (c >= '0' && c <= '9')
		{
			numberCount++;
		}
	}
	printf("大写字符有%d个\n", upperCount);
	printf("小写字符有%d个\n", lowerCount);
	printf("数字字符有%d个\n", numberCount);
	return 0;
}