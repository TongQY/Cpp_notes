#include<iostream>
using namespace std;

int main()
{
	//空指针null，给指针变量初始化，不可访问
	int* p = NULL;
    //内存地址 在0-255之间的内存是系统占用，不可访问

	//野指针非法指向
	int* p = (int*)0x1100;//0x1100地址未申请（错误写法）

	system("pause");
	return 0;
}
