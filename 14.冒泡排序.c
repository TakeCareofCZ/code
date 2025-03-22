#include <stdio.h>
/*
冒泡排序：
	1.相邻元素两两比较，小的放左边，大的放右边
	2.第一轮比较完后，最大值就已经确定，第二轮可以少循环一次，后面以此类推
	3.数组有n个数据，总共就执行n-1轮代码
*/
int main()
{
	int arr[] = { 22,33,11,54,233,774,6,1,76,9993,14,551 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//利用冒泡排序进行升序排序
	//双重循环本质：就是把内循环重复执行了N次而已
	//要看懂双重循环首先要看内循环的作用
	//内循环：找到本次循环的较大值，把值放到最右边
	//外循环：把上面的操作重复执行多次
	for (int i = 0; i < len - 1; i++)
	{
		//len-1防止索引越界，再减i提高效率
		for (int j = 0; j < len - 1 - i; j++)	
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}