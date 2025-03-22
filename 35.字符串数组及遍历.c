#include <stdio.h>
int main()
{
	//由于字符串本身也算一种数组
	//所以字符串数组就相当于二维数组
	char strArr[5][100] =
	{
		"zhangsan",
		"lisi",
		"wangwu",
		"zhaoliu",
		"qianqi"
	};

	//第一种遍历方式：直接遍历
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", strArr[i]);
	}
	printf("\n");
	
	//第二种遍历方式：指针遍历
	//将字符串数组的索引赋给指着变量str（索引本身也是地址，所以这里strArr[i]前面无需取地址符&）
	for (int i = 0; i < 5; i++)
	{
		char* str = strArr[i];
		printf("%s\n", str);
	}
	printf("\n");

	//第三种遍历方式：指针数组遍历
	//字符串本身也是数组，所以这里也可以当指针使用，地址为数组首地址
	char* strArr2[5] = 
	{
		"zhangsan",
		"lisi",
		"wangwu",
		"zhaoliu",
		"qianqi"
	};
	for (int i = 0; i < 5; i++)
	{
		char* str = strArr2[i];
		printf("%s\n", str);
	}
	return 0;
}