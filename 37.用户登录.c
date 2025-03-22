#include <stdio.h>
#include <string.h>
int main()
{
	char* rightUsername = "takecareofcz";
	char* rightPassword = "438438";

	for (int i = 0; i <= 3; i++)
	{
		printf("请输入用户名：\n ");
		char username[20];
		//字符串（字符数组）名本身就是地址，不需要&符号
		scanf("%s", username);

		printf("请输入密码：\n ");
		char password[20];
		scanf("%s", password);

		//printf("%s\n", username);
		//printf("%s\n", password);

		if (!strcmp(username, rightUsername) && !strcmp(password, rightPassword))
		{
			printf("登录成功！\n");
			break;
		}
		else
		{
			if (i == 3)
			{
				printf("用户%s已被锁定！\n", username);
			}
			else
			{
				printf("用户名或密码错误！\n还剩%d次机会！\n", 3 - i);
			}
		}
	}
	
	return 0;
}