#include <stdio.h>

//����2������ʹ�������ض��ֵ
void getMaxAndMin(int arr[], int len, int* max, int* min);

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//���ú���
	int max = arr[0];
	int min = arr[0];
	getMaxAndMin(arr, len, &max, &min);
	printf("��������ֵΪ��%d\n", max);
	printf("�������СֵΪ��%d\n", min);
	return 0;
}

void getMaxAndMin(int arr[], int len, int* max, int* min)
{
	*max = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
	}

	*min = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}