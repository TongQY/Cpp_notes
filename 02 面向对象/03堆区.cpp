#include<iostream>
using namespace std;

int* func()//形参也在栈区
{
	//利用new关键字，将数据开辟到堆区
	int *p = new int(10);
	return p;//p是一个指针，属于局部变量，此时，p保存着堆区存放10的地址，函数返回的是堆区的地址，p被回收也无影响
}

int main()
{
	//程序员管理  要释放
	//c++中用 new 在堆区开辟数据
	//在堆区开辟数据
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}
