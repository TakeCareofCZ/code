#include <stdio.h>
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n");

	for (int a = 1; a <= 10; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}