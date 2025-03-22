#include <stdio.h>
#include <string.h>

int main()
{
	char* str1 = "abc";							//底层会把字符数组放在只读常量区，不可修改、复用
	char str2[100] = "abc";						//可读可写
	char str3[5] = { 'w','a','s','d','\0' };	//可读可写

	printf("--------strlen(长度)--------\n");
	//细节1：strlen这个函数在统计长度的时候，是不计算结束标记的
	//细节2：在windows中，默认情况下，一个中文占两个字节
	int len1 = strlen(str1);//3
	int len2 = strlen(str2);//3
	int len3 = strlen(str3);//4(不算'\n')

	printf("%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", len3);

	//printf("--------strcat(拼接)--------\n");
	////细节：把第二个字符串中的全部内容，拷贝到第一个字符串的末尾
	////		前提1：第一个字符串是可以被修改的
	////		前提2：第一个字符串中剩余的空间可以容纳拼接的字符串
	//strcat(str2, str3);
	//printf("%s\n", str2);
	//printf("%s\n", str3);

	//printf("--------strcpy(拷贝)--------\n");
	////细节：把第二个字符串中的全部内容，拷贝并覆盖到第一个字符串中
	////		前提1：第一个字符串是可以被修改的
	////		前提2：第一个字符串中的空间可以容纳第二个字符串的完整内容
	//strcpy(str2, str3);
	//printf("%s\n", str2);
	//printf("%s\n", str3);

	printf("--------strcmp(比较)--------\n");
	//细节：在比较的时候，要求顺序和内容完全一样（包括大小写），此时才会返回0
	//完全一样：返回0
	//只要有一个不一样：返回不为0的数
	int res = strcmp(str1, str2);
	printf("%d\n", res);

	printf("--------strlwr(小写)--------\n");
	//细节：只能转换英文的大小写，数字、符号、中文不会转换，会保持原样
	_strlwr(str2);
	printf("%s\n", str2);

	printf("--------strupr(大写)--------\n");
	//细节：只能转换英文的大小写，数字、符号、中文不会转换，会保持原样
	_strupr(str2);
	printf("%s\n", str2);

	return 0;
}