#include <stdio.h>
int main()
{
	//因为要输入，所以相当于修改数组内容
	//此时只能用数组方式定义字符串，数组定义时数据存储在普通常量区，可读可写
	//如果用指针方式定义，则放在只读常量区，不可写（不可修改）
	char str[100];
	printf("请输入内容：\n");
	scanf("%s", str);

	//将数组存储在指针p中用于循环遍历
	char* p = str;
	printf("输入的内容为：\n");

	//不知道循环的次数和范围，只知道循环的结束条件
	//用while循环
	while (1)
	{
		//定义一个变量接收字符串的元素地址
		char c = *p;
		//字符串数组以'\0'结束，所以以此为循环遍历的结束条件
		if (c == '\0')
		{
			break;
		}
		printf("%c", c);
		//步长为元素数据类型的内存大小（char: 1）
		p++;
	}
	return 0;
}