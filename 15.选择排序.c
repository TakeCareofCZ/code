#include <stdio.h>

/*
选择排序：
	1.从0索引开始，跟后面的元素一一比较，小的放左边，大的放右边
	2.第一轮循环从0索引开始比较，结束后最小的数据已经确定
	3.第二轮循环从1索引开始比较，后面以此类推
*/
int main()
{
	int arr[] = { 3,5,2,1,4 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//选择排序
	//变量i：依次表示数组中的每一个索引
	//len-1表示当数组长度为len时，只需要进行len-1轮排序
	for (int i = 0; i < len - 1; i++)
	{
		//变量j：依次表示i索引后面的每一个索引
		//所以j = i + 1
		//第一轮：i = 0; j = 1 2 3 4
		//第二轮：i = 1; j = 2 3 4
		//第三轮：i = 2; j = 3 4
		//第四轮：i = 3; j = 4
		for (int j = i + 1; j < len; j++)
		{
			int temp = 0;
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}