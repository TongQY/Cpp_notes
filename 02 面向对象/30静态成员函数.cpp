/*
静态成员函数
1.所有对象共享一个函数
2.静态成员函数只能访问静态成员变量
原因：成员变量静态，非静态，静态成员函数之所以不能访问非静态成员变量
非静态成员变量不能被静态成员函数识别是哪个对象的成员变量，如果有多个对象，变量名相同，就会出错
静态变量所有对象共用一个，因此可以修改，访问
*/

#include<iostream>
using namespace std;

class person
{
public:
	static void func()
	{
		m_a = 100;
		//m_b = 55;不能访问
		cout << "static func" << endl;
		cout << "m_a:" <<m_a<< endl;
		//cout << "m_b:" << m_b << endl;//b不能访问
	}

	
	static int m_a;
	int m_b;
	//验证：
	//静态成员函数也有访问权限
private:
	static void func2()
	{
		cout << "test" << endl;
	}

};

int person::m_a = 66;

void test01()
{
	//1.通过对象访问
	person p;
	p.func();
	//2.通过类名访问
	person::func();
	//person::func2();访问不到
}

int main()
{
	test01();
	system("pause");
	return 0;
}
