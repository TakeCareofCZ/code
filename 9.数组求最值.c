#include <stdio.h>
int main()
{
	int arr[5] = { 33,5,22,44,55 };
	//临时最大值
	//max的默认值一定要是数组中已经存在的数据
	int max = arr[0];
	int len = sizeof(arr) / sizeof(arr[0]);

	//当循环从0索引开始时，第一次判断是与自己比较
	//因此可以从1索引开始循环，提高效率
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大值为%d\n", max);
	return 0;
}