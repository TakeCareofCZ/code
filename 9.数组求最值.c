#include <stdio.h>
int main()
{
	int arr[5] = { 33,5,22,44,55 };
	//��ʱ���ֵ
	//max��Ĭ��ֵһ��Ҫ���������Ѿ����ڵ�����
	int max = arr[0];
	int len = sizeof(arr) / sizeof(arr[0]);

	//��ѭ����0������ʼʱ����һ���ж������Լ��Ƚ�
	//��˿��Դ�1������ʼѭ�������Ч��
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("���ֵΪ%d\n", max);
	return 0;
}