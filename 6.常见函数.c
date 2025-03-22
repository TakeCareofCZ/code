#include <stdio.h>		//输入/输出
#include <math.h>		//常用数学函数
#include <time.h>		//时间/日期工具
#include <stdlib.h>		//通用工具：内存管理、程序工具、字符串转换、随机数、算法
int main()
{
	//幂
	double num1 = pow(2, 10);
	printf("%lf\n", num1);

	//平方根
	double num2 = sqrt(100);
	printf("%lf\n", num2);

	//向上取整
	double num3 = ceil(9.000001);
	printf("%lf\n", num3);

	//向下取整
	double num4 = floor(10.999999);
	printf("%lf\n", num4);

	//绝对值
	int num5 = abs(-1);
	printf("%d", num5);

	//获取当前时间
	//形参：表示获取的当前时间是否需要在其他地方进行存储
	//一般来讲，不需要在其他地方进行存储，NULL（大写）
	//返回值类型：long long
	//结果：从1970年1月1日0:0:0起至今过去的秒数
	long long tim = time(NULL);
	printf("%lld\n", tim);

	//获取随机数（伪随机数）
	//先设置种子，根据线性同余方程计算出各种不同的数字，形成随机数
	//步骤一：srand函数设置种子
	//步骤二：rand函数获取随机数
	srand(1);
	int ran = rand();
	printf("%d", ran);
}