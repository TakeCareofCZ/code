#include <stdio.h>

int binarySearch(int arr[], int len, int num);
void printArr(int arr[], int len);

//���ֲ���ʹ����������������������ݣ���С�����Ӵ�С
int main()
{
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("��¼��5������Ԫ�أ�\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("����Ԫ��Ϊ��");
	printArr(arr, len);

	//��������
	while (1)
	{
		printf("������Ҫ���ҵ����ݣ�");
		int num = 0;
		scanf("%d", &num);
		int index = binarySearch(arr, len, num);
		if (index < 0)
		{
			printf("�����ݲ�����\n", index);
			continue;
		}
		else
		{
			printf("�����ݵ�������%d\n", index);
			break;
		}
	}
	return 0;
}

//���ö��ֲ��ҷ���������
//����ֵ�������������е�����
//��û�в��ҵ��򷵻�-1
int binarySearch(int arr[], int len, int num)
{
	//ȷ�����ҷ�Χ
	int min = 0;
	int max = len - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (arr[mid] < num)
		{
			//Ҫ���ҵ��������Ұ��
			min = mid + 1;
		}
		else if (arr[mid] > num)
		{
			//Ҫ���ҵ�����������
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

void printArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}