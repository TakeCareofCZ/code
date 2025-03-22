#include <stdio.h>
#include <string.h>

/*
	结构体:
		自定义的数据类型
		就是由很多的数据组合成的一个整体
		每一个数据，都是结构体的成员

	书写的位置:
		函数的里面:局部位置，只能再本函数中使用
		函数的外面:全局位置，在所有的函数中都可以使用
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
		给结构体的字符串成员赋值时不可用这种方法
		应该使用字符串拷贝函数
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