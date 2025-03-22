#include <stdio.h>
int main()
{
	/*
		二维数组的定义格式二和索引遍历
			事先把所有的一维数组定义完毕，再放入到二维数组当中
	*/

	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 1,2,3,4,5 };
	int arr3[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//预先计算每个一维数组的真实长度
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	int len3 = sizeof(arr3) / sizeof(arr3[0]);
	//再定义一个数组，存放所有数组的长度
	int lenArr[3] = { len1,len2,len3 };

	//数组的数据类型要和内部存储的元素类型保持一致
	//此处括号中存的是一维数组的内存地址，所以定义用int指针类型
	int* arr[3] = { arr1,arr2,arr3 };

	//索引遍历
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < lenArr[i]; j++)
		{
			//获取i索引上的一维数组中的j索引上的元素
			printf("%d ", arr[i][j]);
		}
		printf("\n");	//每个一维数组遍历完后进行一次换行
	}
	return 0;
}