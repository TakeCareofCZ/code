#include <stdio.h>
#include <string.h>

/*
	�ṹ��:
		�Զ������������
		�����ɺܶ��������ϳɵ�һ������
		ÿһ�����ݣ����ǽṹ��ĳ�Ա

	��д��λ��:
		����������:�ֲ�λ�ã�ֻ���ٱ�������ʹ��
		����������:ȫ��λ�ã������еĺ����ж�����ʹ��
*/

struct Student
{
	char name[10];
	char gender;
	int age;
	float height;
};

int main()
{
	struct Student stu1;
	/*
		���ṹ����ַ�����Ա��ֵʱ���������ַ���
		Ӧ��ʹ���ַ�����������
		stu1.name = "zhangsan";
	*/
	strcpy(stu1.name, "zhangsan");
	stu1.gender = 'M';
	stu1.age = 20;
	stu1.height = 1.88;

	printf("%s\n%c\n%d\n%f\n", stu1.name, stu1.gender, stu1.age, stu1.height);

	struct Student stu2;
	strcpy(stu2.name, "lisi");
	stu2.gender = 'F';
	stu2.age = 22;
	stu2.height = 1.65;

	printf("%s\n%c\n%d\n%f\n", stu2.name, stu2.gender, stu2.age, stu2.height);

	return 0;
}