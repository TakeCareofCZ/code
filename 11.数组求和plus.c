#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��͵Ļ����ϲ���������Ԫ���ظ�
//���������ݵ�ƽ����
//ͳ�Ʊ�ƽ����С�����ݸ���

int contains(int arr[], int len, int num);

int main()
{
	//��������ʱ��Ԫ��ûռ�����Ὣʣ��Ԫ�ض���Ϊ0
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//��������������
	srand(time(NULL));
	for (int i = 0; i < len; )
	{
		//����1-100�������
		int num = rand() % 100 + 1;
		int flag = contains(arr, len, num);
		//��flagΪ0��!flag��Ϊ0ִ�У�Ϊ1��ִ�У����������ظ�����������
		if (!flag)
		{
			arr[i] = num;
			//�������ظ�ʱ������i���䣬ֱ�����ݲ��ظ�Ϊֹ
			//���Խ�forѭ���е�i++�ᵽif�ж���
			i++;
		}
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

	//��ƽ����
	int avg = sum / len;

	//ͳ�Ʊ�ƽ����С�����ݸ���
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < avg)
		{
			count++;
		}
	}
	printf("ƽ����Ϊ%d\n", avg);
	printf("��%d������ƽ������\n", count);

	return 0;
}

//�����ж�Ԫ�����������Ƿ��ظ�
int contains(int arr[], int len, int num)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return 1;
		}
	}
	return 0;
}