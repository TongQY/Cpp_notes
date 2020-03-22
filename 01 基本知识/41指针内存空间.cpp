//int 编译环境32位 四个字节 编译环境64位八个字节 与数据类型无关
#include<iostream>
using namespace std;

int main()
{
	//指针所占空间
	int a = 10;
	int* p;
	p = &a;

	cout << "sizeof (int *) = " << sizeof(int*) << endl;

	system("pause");
	return 0;
}
