#include<iostream>
using namespace std;

template<class T>
void myswap(T&a,T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

//1.1、自动类型推导，必须推导出一致的数据类型T,才可以使用
void test()
{
	int a = 10;
	int b = 20;

	myswap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	char c = 'c';
}
	//myswap(a, c);
	//推导不出一致的T类型
template<class T>
void func()
{
	cout << "func" << endl;
}

void test02()
{
	//func();模板不能独立使用，必须给出T的类型
	func<int>();
}

int main()
{
	test();
	system("pause");
	return 0;
}
