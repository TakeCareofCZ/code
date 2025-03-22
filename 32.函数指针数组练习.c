#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main()
{
	/*
		����ӡ������ˡ����ĸ�����
		�û�����¼����������
		ǰ��������ʾ������������
		����������ʾ���õĺ���
		1���ӷ�
		2������
		3���˷�
		4������

		ϸ�ڣ�ֻ���β���ȫ��ͬ�ҷ���ֵҲһ���ĺ������ſ��Էŵ�ͬһ������ָ��������
	*/

	//����һ������ȥװ�ĸ�������ָ��
	//����ָ������
	int (*parr[4])(int, int) = { add,sub,mul,div };
	printf("������Ҫ������������֣�\n");

	int num1;
	int num2;
	scanf("%d %d", &num1, &num2);

	printf("��ѡ�����㷽ʽ��\n1.�ӷ�\n2.����\n3.�˷�\n4.����\n");
	int calc;
	scanf("%d", &calc);

	//����ѡ����ò�ͬ�ĺ���
	//parr[calc - 1]�Ǹ�����������������ĺ����������������൱��һ������ָ�����������÷��ο�31��
	int res = (parr[calc - 1])(num1, num2);
	printf("������Ϊ��%d\n", res);
	return 0;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}