#include <stdio.h>
int main()
{
	int arr[] = { 10,20,30,40,50 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//�˴�arr��ʾ������׵�ַ��������ȡ��ַ��&��
	int* p1 = arr;
	//Ҳ����ֱ������������ȡ��ַ����ָ��
	//int* p2 = &arr[0];

/*
	printf("%d\n", *p1);
	//+1��ʾ�����һ��������ָ�������鶼Ϊint���ͣ�1���������õ���һ��Ԫ��
	printf("%d\n", *(p1 + 1));
*/

	for (int i = 0; i < len; i++)
	{
		//*p1++�����ú��
		printf("%d\n", *p1++);
	}
	return 0;
}