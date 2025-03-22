#include <stdio.h>

//起别名（原名可以省略不写）
//如此定义结构体，可以起到简化代码的作用，相当于自定义一个数据类型
//细节：typedef的新名字在最后，和#define做区分，#define的新名字在中间
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

	//定义结构体数组
	stu stuArr[3] = { stu1,stu2,stu3 };

	//遍历数组
	for (int i = 0; i < 3; i++)
	{
		stu temp = stuArr[i];
		printf("学生%d的信息为：姓名 %s 年龄 %d\n", i + 1, temp.name, temp.age);
	}
	return 0;
}