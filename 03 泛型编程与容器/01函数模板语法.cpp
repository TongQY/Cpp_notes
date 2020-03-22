/*
c++另一种编程思想  ，泛型编程   主要利用技术是模板
c++提供两种模板机制：函数模板和类模板
1.函数模板作用：
建立一个通用函数函数返回值类型和形参类型可以不具体指定，用一个虚拟的类型来代表
*/

#include<iostream>
using namespace std;

//template<typename T>
/*
template ---声明创建模板
typename ---表明其后的符号是一种数据类型，可用class代替
T ----------通用的数据类型，名称可以替换，通常大写字母*/

void swapint(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swapdouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double aa = 10;
	double bb = 20;
	swap(aa, bb);

	cout << "aa = " << aa << endl;
	cout << "bb = " << bb << endl;
}

void test02()
{
	int a= 10;
	int b = 20;
	myswap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}