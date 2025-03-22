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
	//嵌套结构体快速赋值所有成员变量（兼具可读性）
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
		"学生1的信息为：\n姓名:%s\n年龄:%d\n性别:%c\n身高:%f\n手机号:%s\n邮箱:%s\n使用年:%d\n\n",
		stu1.name, stu1.age, stu1.gender, stu1.height, stu1.msg.phone, stu1.msg.mail, stu1.msg.years
	);


	//更快速方法
	stu stu2 = { "lisi",21,'F',1.66,{"123123","123123@qq.com",5} };
	printf
	(
		"学生2的信息为：\n姓名:%s\n年龄:%d\n性别:%c\n身高:%f\n手机号:%s\n邮箱:%s\n使用年:%d\n\n",
		stu2.name, stu2.age, stu2.gender, stu2.height, stu2.msg.phone, stu2.msg.mail, stu2.msg.years
	);

	//如果单独给嵌套的结构体成员赋值，方法如下
	stu stu3;
	strcpy(stu3.msg.phone, "123456");
	strcpy(stu3.msg.mail, "123456@qq.com");
	stu3.msg.years = 7;

	return 0;
}