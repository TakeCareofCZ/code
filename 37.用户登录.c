#include <stdio.h>
#include <string.h>
int main()
{
	char* rightUsername = "takecareofcz";
	char* rightPassword = "438438";

	for (int i = 0; i <= 3; i++)
	{
		printf("�������û�����\n ");
		char username[20];
		//�ַ������ַ����飩��������ǵ�ַ������Ҫ&����
		scanf("%s", username);

		printf("���������룺\n ");
		char password[20];
		scanf("%s", password);

		//printf("%s\n", username);
		//printf("%s\n", password);

		if (!strcmp(username, rightUsername) && !strcmp(password, rightPassword))
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
		{
			if (i == 3)
			{
				printf("�û�%s�ѱ�������\n", username);
			}
			else
			{
				printf("�û������������\n��ʣ%d�λ��ᣡ\n", 3 - i);
			}
		}
	}
	
	return 0;
}