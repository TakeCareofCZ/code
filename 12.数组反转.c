#include <stdio.h>

void printArr(int arr[], int len);

int main()
{
	//��ʼ¼��
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("��¼��5������Ԫ�أ�\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("����Ԫ��Ϊ��");
	printArr(arr, len);

	//���з�ת
	int i = 0;
	int j = len - 1;
	int temp = 0;
	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	printf("��ת�������Ԫ��Ϊ��");
	printArr(arr, len);
	return 0;
}

void printArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
