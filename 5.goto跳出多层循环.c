#include <stdio.h>
int main()
{
	//��ѭ��
	for (int i = 1; i <= 3; i++)
	{
		//��ѭ��
		for (int j = 1; j <= 5; j++)
		{
			printf("��ѭ��ִ��%d\n", j);
			//������ѭ��
			//break;
			//ֱ���������a�����д������ִ��
			goto a;
		}
		printf("��ѭ������\n");
		printf("---------\n");
	}
	//���
a: 
	printf("��ѭ������\n");
	return 0;
}