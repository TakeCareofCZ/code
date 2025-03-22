#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//定义数组时当元素没占满，会将剩余元素定义为0
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//将随机数填进数组
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		//生成1-100的随机数
		int num = rand() % 100 + 1;
		arr[i] = num;
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
	return 0;
}