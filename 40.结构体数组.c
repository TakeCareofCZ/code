#include <stdio.h>

//�������ԭ������ʡ�Բ�д��
//��˶���ṹ�壬�����𵽼򻯴�������ã��൱���Զ���һ����������
//ϸ�ڣ�typedef������������󣬺�#define�����֣�#define�����������м�
typedef struct Student
{
	char name[10];
	int age;
} stu;

int main()
{
	stu stu1 = { "zhangsan",20 };
	stu stu2 = { "lisi",21 };
	stu stu3 = { "wangwu",22 };

	//����ṹ������
	stu stuArr[3] = { stu1,stu2,stu3 };

	//��������
	for (int i = 0; i < 3; i++)
	{
		stu temp = stuArr[i];
		printf("ѧ��%d����ϢΪ������ %s ���� %d\n", i + 1, temp.name, temp.age);
	}
	return 0;
}