#include <stdio.h>
int main()
{
	//外循环
	for (int i = 1; i <= 3; i++)
	{
		//内循环
		for (int j = 1; j <= 5; j++)
		{
			printf("内循环执行%d\n", j);
			//跳出内循环
			//break;
			//直接跳至标号a的那行代码继续执行
			goto a;
		}
		printf("内循环结束\n");
		printf("---------\n");
	}
	//标号
a: 
	printf("外循环结束\n");
	return 0;
}