#include <stdio.h>
int main()
{
	//�����ַ�������Ҳ��һ������
	//�����ַ���������൱�ڶ�ά����
	char strArr[5][100] =
	{
		"zhangsan",
		"lisi",
		"wangwu",
		"zhaoliu",
		"qianqi"
	};

	//��һ�ֱ�����ʽ��ֱ�ӱ���
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", strArr[i]);
	}
	printf("\n");
	
	//�ڶ��ֱ�����ʽ��ָ�����
	//���ַ����������������ָ�ű���str����������Ҳ�ǵ�ַ����������strArr[i]ǰ������ȡ��ַ��&��
	for (int i = 0; i < 5; i++)
	{
		char* str = strArr[i];
		printf("%s\n", str);
	}
	printf("\n");

	//�����ֱ�����ʽ��ָ���������
	//�ַ�������Ҳ�����飬��������Ҳ���Ե�ָ��ʹ�ã���ַΪ�����׵�ַ
	char* strArr2[5] = 
	{
		"zhangsan",
		"lisi",
		"wangwu",
		"zhaoliu",
		"qianqi"
	};
	for (int i = 0; i < 5; i++)
	{
		char* str = strArr2[i];
		printf("%s\n", str);
	}
	return 0;
}