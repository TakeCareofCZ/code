#include <stdio.h>

typedef struct Student
{
	char name[10];
	int age;
} stu;

//因为函数用到了结构体， 函数要定义在结构体定义语句的下面
void method1(stu st);
void method2(stu* p);

int main()
{
	stu stu1 = { "zhangsan",20 };

	printf("学生的初始信息为：姓名 %s 年龄 %d\n", stu1.name, stu1.age);
	//将结构体stu1的内存地址传递到函数中
	method2(&stu1);
	printf("学生的信息修改为：姓名 %s 年龄 %d\n", stu1.name, stu1.age);

	return 0;
}

//细节：
//		如果函数中写的是结构体类型的变量，相当于是定义了一个新的变量
//		此时是把main函数中stu1中的数据，传递给了method函数，并把stu中的数据赋值给了新的变量
//		我们在函数中，仅仅是修改了变量st中的值，对main函数中stu的值，是没有进行修改的
//void method1(stu st)
//{
//	printf("接收到main函数中的学生初始信息为：姓名 %s 年龄 %d\n", st.name, st.age);
//
//	printf("请输入要修改的学生名字：\n");
//	//name是一个数组，数组名本身就属于地址，所以这里无需取地址符&
//	scanf("%s", st.name);
//	printf("请输入要修改的学生年龄：\n");
//	scanf("%d", &(st.age));
//
//	printf("在method函数中修改之后，学生的信息为：姓名 %s 年龄 %d\n", st.name, st.age);
//}

//如果要在函数中修改stu1的值，此时就不要再定义新的变量了
//直接接收stu1的内存地址，通过内存地址就可以修改stu中的数据了
//指针p里面记录的是main函数中的stu1的内存地址
void method2(stu* p)
{
	printf("接收到main函数中的学生初始信息为：姓名 %s 年龄 %d\n", (*p).name, (*p).age);

	printf("请输入要修改的学生名字：\n");
	//name是一个数组，数组名本身就属于地址，所以这里无需取地址符&
	scanf("%s", (*p).name);
	printf("请输入要修改的学生年龄：\n");
	scanf("%d", &((*p).age));

	printf("在method函数中修改之后，学生的信息为：姓名 %s 年龄 %d\n", (*p).name, (*p).age);
}