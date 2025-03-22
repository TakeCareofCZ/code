#include <stdio.h>

//作用3：将函数的结果和计算状态分开
//如此例所示，计算状态分为除数为0和不为0
//利用指针在照常返回判断结果的值的同时，将计算结果的地址传递到主函数的计算结果变量中
int getRemainder(int num1, int num2, int* res);

int main()
{
	int a = 10;
	int b = 0;
	int res = 0;
	int flag = getRemainder(a, b, &res);
	//此处判断条件为"!flag"，是为了更好理解逻辑运算符
	//实际开发时完全可将函数中判断是否0做除数后的返回值调换，再将flag作为此处判断条件，而非"!flag"
	//黑马的教程实在是有点应试的味道[捂脸]
	if (!flag)
	{
		printf("计算结果为：%d\n");
	}
	else
	{
		printf("0不能做除数！\n");
	}
	return 0;
}

int getRemainder(int num1, int num2, int* res)
{
	if (num2 == 0)
	{
		return 1;
	}
	*res = num1 % num2;
	return 0;
}