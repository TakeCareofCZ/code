#include <stdio.h>

void printArr(int arr[], int len);

int main()
{
	//初始录入
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请录入5个数组元素：\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("数组元素为：");
	printArr(arr, len);

	//进行反转
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
	printf("反转后的数组元素为：");
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
