#include <stdio.h>
int main()
{
	/*
		��ά����Ķ����ʽ������������
			���Ȱ����е�һά���鶨����ϣ��ٷ��뵽��ά���鵱��
	*/

	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 1,2,3,4,5 };
	int arr3[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//Ԥ�ȼ���ÿ��һά�������ʵ����
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	int len3 = sizeof(arr3) / sizeof(arr3[0]);
	//�ٶ���һ�����飬�����������ĳ���
	int lenArr[3] = { len1,len2,len3 };

	//�������������Ҫ���ڲ��洢��Ԫ�����ͱ���һ��
	//�˴������д����һά������ڴ��ַ�����Զ�����intָ������
	int* arr[3] = { arr1,arr2,arr3 };

	//��������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < lenArr[i]; j++)
		{
			//��ȡi�����ϵ�һά�����е�j�����ϵ�Ԫ��
			printf("%d ", arr[i][j]);
		}
		printf("\n");	//ÿ��һά�������������һ�λ���
	}
	return 0;
}