#include <stdio.h>
#include <string.h>

int main()
{
	/*
		¼��һ���ַ�����ͳ�����еĴ�Сд�ַ��������ַ��ĸ����ֱ��Ƕ���
		*������˼�룺����a; a++;
	*/
	printf("������һ���ַ�����\n");
	char str[100];
	scanf("%s", str);

	int lowerCount = 0;
	int upperCount = 0;
	int numberCount = 0;

	//�����ַ���
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
	printf("��д�ַ���%d��\n", upperCount);
	printf("Сд�ַ���%d��\n", lowerCount);
	printf("�����ַ���%d��\n", numberCount);
	return 0;
}