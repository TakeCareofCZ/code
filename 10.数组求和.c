#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//��������ʱ��Ԫ��ûռ�����Ὣʣ��Ԫ�ض���Ϊ0
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//��������������
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		//����1-100�������
		int num = rand() % 100 + 1;
		arr[i] = num;
	}

	//�������
	int sum = 0;
	printf("����Ԫ��Ϊ");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
		sum = sum + arr[i];
	}
	printf("\n����֮��Ϊ%d\n", sum);
	return 0;
}