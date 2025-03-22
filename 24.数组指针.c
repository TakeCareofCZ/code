#include <stdio.h>
int main()
{
	int arr[] = { 10,20,30,40,50 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//此处arr表示数组的首地址（无需用取地址符&）
	int* p1 = arr;
	//也可以直接用数组索引取地址赋给指针
	//int* p2 = &arr[0];

/*
	printf("%d\n", *p1);
	//+1表示向后走一个步长，指针与数组都为int类型，1个步长正好到后一个元素
	printf("%d\n", *(p1 + 1));
*/

	for (int i = 0; i < len; i++)
	{
		//*p1++：先用后加
		printf("%d\n", *p1++);
	}
	return 0;
}