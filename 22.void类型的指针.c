#include <stdio.h>

void swap(void* p1, void* p2, int size);

/*
	不同类型的指针之间，是不能互相赋值的
	而void类型的指针可以打破上述的限制
	void指针可以接受任意类型指针记录的内存地址
	但是void指针无法获取变量里面的数据，也不能进行“加、减”等计算
*/

int main()
{
	short a = 100;
	short b = 200;
	swap(&a, &b, 2);
	printf("a = %d, b = %d\n", a, b);

	long long c = 300;
	long long d = 400;
	swap(&c, &d, 8);
	printf("c = %lld, d = %lld\n", c, d);

	char e = 'e';
	char f = 'f';
	swap(&e, &f, 1);
	printf("e = %c, f = %c\n", e, f);
	return 0;
}

//两值交换函数
//定义size为步长，通过修改指针类型使函数更具通用性
void swap(void* p1, void* p2, int size)
{
	//把void类型的指针转成char类型，因为char类型变量占内存1字节
	char* pc1 = p1;
	char* pc2 = p2;
	char temp = 0;

	//以字节为单位，逐字节地将两值进行交换
	for (int i = 0; i < size; i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;

		pc1++;
		pc2++;
	}
}