#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(NULL));
	int random = rand() % 100 + 1;		//�������������1-100����

	int guess;
	int count = 0;
	while (1)
	{
		printf("��һ��1��100����\n");
		scanf("%d", &guess);
		if (guess > random)
		{
			printf("���ˣ�\n");
			printf("--------------------\n");
			count++;
		}
		else if (guess < random)
		{
			printf("С�ˣ�\n");
			printf("--------------------\n");
			count++;
		}
		else
		{
			printf("���ˣ�\n");
			printf("--------------------\n");
			count++;
			break;
		}
	}
	switch (count)
	{
		case 1:
		case 2:
		case 3:
		{
			printf("һ������%d�Σ������ˣ�\n", count);
			break;
		}
		case 4:
		case 5:
		case 6:
		{
			printf("һ������%d�Σ������ԣ�\n", count);
			break;
		}
		case 7:
		case 8:
		case 9:
		{
			printf("һ������%d�Σ����а���\n", count);
			break;
		}
		default:
		{
			printf("һ������%d�Σ�����\n", count);
			break;
		}
	}
}