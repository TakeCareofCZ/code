#include <stdio.h>

//����3���������Ľ���ͼ���״̬�ֿ�
//�������ʾ������״̬��Ϊ����Ϊ0�Ͳ�Ϊ0
//����ָ�����ճ������жϽ����ֵ��ͬʱ�����������ĵ�ַ���ݵ��������ļ�����������
int getRemainder(int num1, int num2, int* res);

int main()
{
	int a = 10;
	int b = 0;
	int res = 0;
	int flag = getRemainder(a, b, &res);
	//�˴��ж�����Ϊ"!flag"����Ϊ�˸�������߼������
	//ʵ�ʿ���ʱ��ȫ�ɽ��������ж��Ƿ�0��������ķ���ֵ�������ٽ�flag��Ϊ�˴��ж�����������"!flag"
	//����Ľ̳�ʵ�����е�Ӧ�Ե�ζ��[����]
	if (!flag)
	{
		printf("������Ϊ��%d\n");
	}
	else
	{
		printf("0������������\n");
	}
	return 0;
}

int getRemainder(int num1, int num2, int* res)
{
	if (num2 == 0)
	{
		return 1;
	}
	*res = num1 % num2;
	return 0;
}