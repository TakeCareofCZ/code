#include <stdio.h>
int main()
{
	//数组指针：指向数组的指针
	//作用：方便操作数组中的各种数据
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };

	//第一种
	int* p1 = arr1;			//步长为4字节(int: 4)

	//第二种
	int (*p2)[5] = arr2;	//步长为20字节(int: 4 * 5 = 20)



	//指针数组：存放指针的数组
	//作用：用来存放指针
	int* p[5] = { arr1,arr2 };

	return 0;
}