#include <stdio.h>
#include <string.h>

struct Message
{
	char phone[12];
	char mail[20];
	int years;
};

typedef struct Student
{
	char name[10];
	int age;
	char gender;
	float height;
	struct Message msg;
} stu;

int main()
{
	//Ƕ�׽ṹ����ٸ�ֵ���г�Ա��������߿ɶ��ԣ�
	stu stu1 =
	{
		.name = "zhangsan",
		.age = 20,
		.gender = 'M',
		.height = 1.77,
		.msg =
		{
			"11111111",
			"123123@qq.com",
			6
		}
	};
	printf
	(
		"ѧ��1����ϢΪ��\n����:%s\n����:%d\n�Ա�:%c\n���:%f\n�ֻ���:%s\n����:%s\nʹ����:%d\n\n",
		stu1.name, stu1.age, stu1.gender, stu1.height, stu1.msg.phone, stu1.msg.mail, stu1.msg.years
	);


	//�����ٷ���
	stu stu2 = { "lisi",21,'F',1.66,{"123123","123123@qq.com",5} };
	printf
	(
		"ѧ��2����ϢΪ��\n����:%s\n����:%d\n�Ա�:%c\n���:%f\n�ֻ���:%s\n����:%s\nʹ����:%d\n\n",
		stu2.name, stu2.age, stu2.gender, stu2.height, stu2.msg.phone, stu2.msg.mail, stu2.msg.years
	);

	//���������Ƕ�׵Ľṹ���Ա��ֵ����������
	stu stu3;
	strcpy(stu3.msg.phone, "123456");
	strcpy(stu3.msg.mail, "123456@qq.com");
	stu3.msg.years = 7;

	return 0;
}