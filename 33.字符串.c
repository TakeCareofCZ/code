#include <stdio.h>
int main()
{
	//1.利用字符数组 + 双引号的方式定义字符串
	char str1[4] = "abc";
	printf("%s\n", str1);

	//细节1:
	//		在底层，实际存储的时候，c语言会帮我们把字符串"abc"转换成字符数组进行保存
	//		并且在末尾还要再加上'\0': {'a','b','c','\0'};
	
	//细节2:
	//		数组的长度，要么不写，要么把结束标记的空间给预留出来（长度加1）
	
	//细节3:
	//		字符数组 + 双引号的方式定义字符串，内容是可以发生改变的
	str1[0] = 'Q';
	printf("%s\n", str1);


	//2.利用指针 + 双引号的方式定义字符串
	char* str2 = "abcd";
	char* str3 = "abcd";
	//printf("%s\n", str2);
	//细节1:
	//		在底层，实际存储的时候，c语言还是会帮我们把字符串"abcd"转换成字符数组进行保存
	//		并且在末尾还要再加上'\0': {'a','b','c','d','\0'};
	
	//细节2:
	//		利用指针 + 双引号的方式定义字符串，会把底层的字符数组放在只读常量区
	//		只读常量区特点:
	//			①内容不可以修改
	//			②里面定义的字符串是可以复用的
	//				在创建abcd的时候，会检查只读常量区里面有没有abcd，
	//				如果已经有了，不会创建新的变量，而是进行复用；如果没有，才会创建新的
	
	//①
	//放开此行注释查看报错
	//str2[0] = 'Q';
	//printf("%s\n", str2);

	//②
	//两个不同变量定义相同字符串，内容复用，地址相同
	printf("%p\n", str2);
	printf("%p\n", str3);
	
	//细节3：
	//		如果以数组形式定义字符串，则会把字符串放在普通常量区（字符数组 + 双引号的方式也是如此）
	//		普通常量区特点：可读可写
	//char str2[5] = {'a','b','c','d','\0'};
	
	return 0;
}