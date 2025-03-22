#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main()
{
	/*
		定义加、减、乘、除四个函数
		用户键盘录入三个数字
		前两个数表示参与计算的数字
		第三个数表示调用的函数
		1：加法
		2：减法
		3：乘法
		4：除法

		细节：只有形参完全相同且返回值也一样的函数，才可以放到同一个函数指针数组里
	*/

	//定义一个数组去装四个函数的指针
	//函数指针数组
	int (*parr[4])(int, int) = { add,sub,mul,div };
	printf("请输入要计算的两个数字：\n");

	int num1;
	int num2;
	scanf("%d %d", &num1, &num2);

	printf("请选择运算方式：\n1.加法\n2.减法\n3.乘法\n4.除法\n");
	int calc;
	scanf("%d", &calc);

	//根据选择调用不同的函数
	//parr[calc - 1]是根据索引调用数组里的函数，整体括起来相当于一个函数指针名（具体用法参考31）
	int res = (parr[calc - 1])(num1, num2);
	printf("计算结果为：%d\n", res);
	return 0;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}