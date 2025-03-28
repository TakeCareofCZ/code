#include <stdio.h>


int main()
{
	/*
		指针运算有意义的操作：
			1.指针和整数进行”加、减“操作（移动相应整数个步长，步长取决于指针类型）
			（char为1，short为2，int为4，long为4，long long为8）
			2.指针和指针进行”减“操作（计算两指针之间的间隔步长）

		指针运算无意义的操作：
			1.指针跟整数进行”乘、除“操作
			2.指针和指针进行”加、乘、除“操作
	*/

	//前提条件：保证内存空间是连续的
	//于是数组：
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//获取0索引的内存地址
	int* p1 = &arr[0];

	//通过内存地址（指针p）获取数据
	printf("指针p1指向%d\n", *p1);
	printf("向后移动2个步长后指向%d\n\n", *(p1 + 2));

	//获取5索引的内存地址
	int* p2 = &arr[5];

	//计算p1~p2间隔了多少步长
	printf("p1~p2间隔了%d个步长\n\n", p2 - p1);	//5 * 4 = 20个字节

	//验算间隔字节数
	printf("指针p1地址为%p\n", p1);
	printf("指针p2地址为%p\n", p2);
	return 0;
}