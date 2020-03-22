#include<iostream>
using namespace std;

/*
1.如果函数模板和普通函数都可以实现 优先调用普通函数
2.可以通过空模板参数列表强制调用函数模板
3.函数模板也可以重载
4.如果函数模板可以产生更好的匹配，优先调用函数模板
*/

void myprint(int a, int b)
{
	cout << "普通函数" << endl;
}

template<class T>
void myprint(T a, T b)
{
	cout << "函数模板" << endl;
}

template<class T>
void myprint(T a, T b,T c)
{
	cout << "重载的函数模板 " << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	int c = 30;

	//空模板列表
	myprint<>(a, b,c);
}

void test02()
{
	char a = 'a';
	char b = 'b';

	//不用发生隐式类型转换，调用函数重载
	myprint(a, b);
}
int main()
{
	test02();
	system("pause");
	return 0;
}