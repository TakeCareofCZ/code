#include <stdio.h>
int main()
{	
	/*
		数组指针的细节：
			arr参与计算的时候会退化为第一个元素的指针
		特殊情况：
			sizeof运算的时候不会退化，arr还是代表整体数组
			&arr取地址的时候不会退化
	*/
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//sizeof运算的时候不会退化，arr还是代表整体数组
	printf("%zu\n", sizeof(arr));

	//arr参与计算的时候，会退化为第一个元素的指针,记录的内存地址为数组的首地址，步长:数据类型 int 4
	//&arr取地址的时候，不会退化，记录的内存地址为数组的首地址，步长:数据类型 * 数组的长度 4 * 10 = 40
	printf("%p\n", arr);
	printf("%p\n", &arr);

	printf("%p\n", arr + 1);	//4
	printf("%p\n", &arr + 1);	//40
	return 0;
}