#include <stdio.h>		//����/���
#include <math.h>		//������ѧ����
#include <time.h>		//ʱ��/���ڹ���
#include <stdlib.h>		//ͨ�ù��ߣ��ڴ�������򹤾ߡ��ַ���ת������������㷨
int main()
{
	//��
	double num1 = pow(2, 10);
	printf("%lf\n", num1);

	//ƽ����
	double num2 = sqrt(100);
	printf("%lf\n", num2);

	//����ȡ��
	double num3 = ceil(9.000001);
	printf("%lf\n", num3);

	//����ȡ��
	double num4 = floor(10.999999);
	printf("%lf\n", num4);

	//����ֵ
	int num5 = abs(-1);
	printf("%d", num5);

	//��ȡ��ǰʱ��
	//�βΣ���ʾ��ȡ�ĵ�ǰʱ���Ƿ���Ҫ�������ط����д洢
	//һ������������Ҫ�������ط����д洢��NULL����д��
	//����ֵ���ͣ�long long
	//�������1970��1��1��0:0:0�������ȥ������
	long long tim = time(NULL);
	printf("%lld\n", tim);

	//��ȡ�������α�������
	//���������ӣ���������ͬ�෽�̼�������ֲ�ͬ�����֣��γ������
	//����һ��srand������������
	//�������rand������ȡ�����
	srand(1);
	int ran = rand();
	printf("%d", ran);
}