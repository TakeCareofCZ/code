#include <stdio.h>

void swap(void* p1, void* p2, int size);

/*
	��ͬ���͵�ָ��֮�䣬�ǲ��ܻ��ำֵ��
	��void���͵�ָ����Դ�������������
	voidָ����Խ�����������ָ���¼���ڴ��ַ
	����voidָ���޷���ȡ������������ݣ�Ҳ���ܽ��С��ӡ������ȼ���
*/

int main()
{
	short a = 100;
	short b = 200;
	swap(&a, &b, 2);
	printf("a = %d, b = %d\n", a, b);

	long long c = 300;
	long long d = 400;
	swap(&c, &d, 8);
	printf("c = %lld, d = %lld\n", c, d);

	char e = 'e';
	char f = 'f';
	swap(&e, &f, 1);
	printf("e = %c, f = %c\n", e, f);
	return 0;
}

//��ֵ��������
//����sizeΪ������ͨ���޸�ָ������ʹ��������ͨ����
void swap(void* p1, void* p2, int size)
{
	//��void���͵�ָ��ת��char���ͣ���Ϊchar���ͱ���ռ�ڴ�1�ֽ�
	char* pc1 = p1;
	char* pc2 = p2;
	char temp = 0;

	//���ֽ�Ϊ��λ�����ֽڵؽ���ֵ���н���
	for (int i = 0; i < size; i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;

		pc1++;
		pc2++;
	}
}