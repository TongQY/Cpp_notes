
//继承中的同名静态成员处理

#include<iostream>
using namespace std;

class Base
{
public:
	static void func()
	{
		cout << "base -func 调用 " << endl;
	}

	static void func(int a)
	{
		cout << "base (int a) -func 调用 " << endl;
	}
	static int m_a;//
};
 int Base::m_a=100;//类内定义，类外初始化

class Son:public Base
{
public:
	static void func()
	{
		cout << "son -func 调用 " << endl;
	}
	static int m_a;
};

int Son::m_a = 317;//类内定义，类外初始化

//同名静态成员属性
void test01()
{
	//1.通过对象访问
	cout << "通过对象访问" << endl;
	Son s;
	cout << "s.m_a = " << s.m_a << endl;
	cout << "s.Base::m_a = " << s.Base::m_a << endl;
	//2.通过类名访问
	cout << "通过类名访问 " << endl;
	cout << "s.m_a = " << Son::m_a << endl;
	//第一个:代表通过类名的方式访问，第二个：代表访问父类作用域下
	cout << "s.Base::m_a = " << Son::Base::m_a << endl;

}

//同名成员函数
void test02()
{
	//1.通过对象访问
	Son s2;
	s2.func();
	s2.Base::func();
	s2.Base::func(5);

	//2.通过类名方式访问
	Son::func();
	Son::Base::func();
	Son::Base::func(5);
}

int main()
{
	test02();
	system("pause");
	return 0;
}
