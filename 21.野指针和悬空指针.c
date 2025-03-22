#include <stdio.h>

int* method();

int main()
{
	//野指针：指针指向的空间未分配
	//悬空指针：指针指向的空间已分配，但是被释放了

	//野指针使用场景：单机游戏外挂

	int a = 10;
	int* p1 = &a;
	printf("%d\n", *p1);
	printf("%p\n", p1);

	//野指针
	int* p2 = p1 + 10;
	printf("%d\n", *p2);
	printf("%p\n", p2);

	//悬空指针
	int* p3 = method();

	//函数调用后会将其内部的局部变量的内存空间释放掉
	//但有一定的缓冲时间足以让程序正常运行（详见数据结构系统堆栈部分知识）
	//所以这里让它拖点时间，看看悬空指针的现象
	printf("拖点时间……\n");

	//此时p3指向的地址存放的数据已经不是函数method中变量num的10了
	printf("%d\n", *p3);
	printf("%p\n", p3);

	return 0;
}

int* method()
{
	int num = 10;
	int* p = &num;
	return p;
}