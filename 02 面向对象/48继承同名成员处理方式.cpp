
#include<iostream>
using namespace std;

/*
当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中的同名对象

访问子类同名成员 直接访问即可
访问父类同名成员 需要加载作用域*/

class Base
{
public:
	Base()
	{
		m_a = 10;
	}
	void func()
	{
		cout << "base -func 调用 " << endl;
	}
	void func(int a)
	{
		cout << "base -func(int a) 调用 " << endl;
	}
	int m_a;
};

class Son:public Base
{
public:
	Son()
	{
		m_a = 200;
	}
	void func()
	{
		cout << "son -func 调用" << endl;
	}
	int m_a;
};

//同名成员属性
void test01()
{
	Son s;
	cout << "s.m_a" << s.m_a << endl;
	cout << "s.m_a" << s.Base::m_a << endl;
}
//同名成员函数

void test02()
{
	Son s2;
	//默认调用子类
	s2.func();
	//调用父类 ，作用域
	s2.Base::func();

	//s2.func(317)//不会调用父类
	//如果子类和父类由同名函数
	//子类会屏蔽父类所有函数
	s2.Base::func(5);
}

int main()
{
	test02();
	system("pause");
	return 0;
}
