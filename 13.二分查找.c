#include <stdio.h>

int binarySearch(int arr[], int len, int num);
void printArr(int arr[], int len);

//二分查找使用条件：必须是有序的数据，从小到大或从大到小
int main()
{
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请录入5个数组元素：\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("数组元素为：");
	printArr(arr, len);

	//查找数据
	while (1)
	{
		printf("请输入要查找的数据：");
		int num = 0;
		scanf("%d", &num);
		int index = binarySearch(arr, len, num);
		if (index < 0)
		{
			printf("此数据不存在\n", index);
			continue;
		}
		else
		{
			printf("此数据的索引是%d\n", index);
			break;
		}
	}
	return 0;
}

//利用二分查找法查找数据
//返回值：数据在数组中的索引
//若没有查找到则返回-1
int binarySearch(int arr[], int len, int num)
{
	//确定查找范围
	int min = 0;
	int max = len - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (arr[mid] < num)
		{
			//要查找的数据在右半边
			min = mid + 1;
		}
		else if (arr[mid] > num)
		{
			//要查找的数据在左半边
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