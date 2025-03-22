#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(NULL));
	int random = rand() % 100 + 1;		//将随机数限制在1-100以内

	int guess;
	int count = 0;
	while (1)
	{
		printf("猜一个1到100的数\n");
		scanf("%d", &guess);
		if (guess > random)
		{
			printf("大了！\n");
			printf("--------------------\n");
			count++;
		}
		else if (guess < random)
		{
			printf("小了！\n");
			printf("--------------------\n");
			count++;
		}
		else
		{
			printf("中了！\n");
			printf("--------------------\n");
			count++;
			break;
		}
	}
	switch (count)
	{
		case 1:
		case 2:
		case 3:
		{
			printf("一共猜了%d次，真幸运！\n", count);
			break;
		}
		case 4:
		case 5:
		case 6:
		{
			printf("一共猜了%d次，还可以！\n", count);
			break;
		}
		case 7:
		case 8:
		case 9:
		{
			printf("一共猜了%d次，不行啊！\n", count);
			break;
		}
		default:
		{
			printf("一共猜了%d次，肺雾！\n", count);
			break;
		}
	}
}