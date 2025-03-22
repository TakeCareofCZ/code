#include <stdio.h>
int main()
//1^1 + 2^2 + 3^3 + ... + 10^10 = ?
{
	long long res = 0;
	for (int i = 1; i <= 10; i++)
	{
		//每一项的结果
		long long pow = 1;
		for (int j = 1; j <= i; j++)
		{
			pow = pow * i;
		}
		res = res + pow;
	}
	printf("%lld", res);
	return 0;
}