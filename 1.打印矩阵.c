#include <stdio.h>
int main()
{
	//外循环
	for (int i = 1; i <= 10; i++)
	{
		//内循环
		for (int j = 1; j <= 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}