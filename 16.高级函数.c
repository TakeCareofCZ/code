#include <stdio.h>

//�˴����������մ��ݹ�����ֵ���ٽ��м��㣬����ֵ������ѡ���߼��÷����17��
int sum(int mon1, int mon2, int mon3)
{
	int sum = mon1 + mon2 + mon3;
	return sum;
}

int main()
{
	int seas1, seas2, seas3, seas4;
	seas1 = sum(10, 20, 15);
	seas2 = sum(20, 30, 17);
	seas3 = sum(19, 17, 20);
	seas4 = sum(23, 21, 19);
	printf("��һ���ȣ�%d\n�ڶ����ȣ�%d\n�������ȣ�%d\n���ļ��ȣ�%d\n", seas1, seas2, seas3, seas4);

	int arr[] = { seas1,seas2,seas3,seas4 };
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			int temp = 0;
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	printf("��С��������");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}