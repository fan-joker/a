#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
check_sys()
{
	//int a = 1;
	//char* p = (char*)&a;
	////����1��С��
	////����0�����
	//return *p;
	int a = 1;
	return *(char*)&a;
}

int main()
{
	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}