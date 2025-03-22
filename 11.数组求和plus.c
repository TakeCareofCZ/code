#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//求和的基础上不能让数组元素重复
//求所有数据的平均数
//统计比平均数小的数据个数

int contains(int arr[], int len, int num);

int main()
{
	//定义数组时当元素没占满，会将剩余元素定义为0
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//将随机数填进数组
	srand(time(NULL));
	for (int i = 0; i < len; )
	{
		//生成1-100的随机数
		int num = rand() % 100 + 1;
		int flag = contains(arr, len, num);
		//当flag为0（!flag，为0执行，为1不执行）即不存在重复，则继续添加
		if (!flag)
		{
			arr[i] = num;
			//当数据重复时，保持i不变，直到数据不重复为止
			//所以将for循环中的i++提到if判断中
			i++;
		}
	}

	//数组求和
	int sum = 0;
	printf("数组元素为");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
		sum = sum + arr[i];
	}
	printf("\n数组之和为%d\n", sum);

	//求平均数
	int avg = sum / len;

	//统计比平均数小的数据个数
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < avg)
		{
			count++;
		}
	}
	printf("平均数为%d\n", avg);
	printf("有%d个数比平均数大\n", count);

	return 0;
}

//函数判断元素在数组中是否重复
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