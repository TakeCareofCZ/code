#include <stdio.h>

typedef struct Student
{
	char name[10];
	int age;
} stu;

//��Ϊ�����õ��˽ṹ�壬 ����Ҫ�����ڽṹ�嶨����������
void method1(stu st);
void method2(stu* p);

int main()
{
	stu stu1 = { "zhangsan",20 };

	printf("ѧ���ĳ�ʼ��ϢΪ������ %s ���� %d\n", stu1.name, stu1.age);
	//���ṹ��stu1���ڴ��ַ���ݵ�������
	method2(&stu1);
	printf("ѧ������Ϣ�޸�Ϊ������ %s ���� %d\n", stu1.name, stu1.age);

	return 0;
}

//ϸ�ڣ�
//		���������д���ǽṹ�����͵ı������൱���Ƕ�����һ���µı���
//		��ʱ�ǰ�main������stu1�е����ݣ����ݸ���method����������stu�е����ݸ�ֵ�����µı���
//		�����ں����У��������޸��˱���st�е�ֵ����main������stu��ֵ����û�н����޸ĵ�
//void method1(stu st)
//{
//	printf("���յ�main�����е�ѧ����ʼ��ϢΪ������ %s ���� %d\n", st.name, st.age);
//
//	printf("������Ҫ�޸ĵ�ѧ�����֣�\n");
//	//name��һ�����飬��������������ڵ�ַ��������������ȡ��ַ��&
//	scanf("%s", st.name);
//	printf("������Ҫ�޸ĵ�ѧ�����䣺\n");
//	scanf("%d", &(st.age));
//
//	printf("��method�������޸�֮��ѧ������ϢΪ������ %s ���� %d\n", st.name, st.age);
//}

//���Ҫ�ں������޸�stu1��ֵ����ʱ�Ͳ�Ҫ�ٶ����µı�����
//ֱ�ӽ���stu1���ڴ��ַ��ͨ���ڴ��ַ�Ϳ����޸�stu�е�������
//ָ��p�����¼����main�����е�stu1���ڴ��ַ
void method2(stu* p)
{
	printf("���յ�main�����е�ѧ����ʼ��ϢΪ������ %s ���� %d\n", (*p).name, (*p).age);

	printf("������Ҫ�޸ĵ�ѧ�����֣�\n");
	//name��һ�����飬��������������ڵ�ַ��������������ȡ��ַ��&
	scanf("%s", (*p).name);
	printf("������Ҫ�޸ĵ�ѧ�����䣺\n");
	scanf("%d", &((*p).age));

	printf("��method�������޸�֮��ѧ������ϢΪ������ %s ���� %d\n", (*p).name, (*p).age);
}