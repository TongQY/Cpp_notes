#include<iostream>
using namespace std;
/*
c++中允许一个类继承多个类
语法：class 子类：继承方式 父类，继承方式 父类25
*/

class base1
{
public:
	base1()
	{
		m_a = 100;
	}
	int m_a;
};

class base2
{
public:
	base2()
	{
		m_a =2000;
		m_b = 200;
	}
	int m_a;
	int m_b;
};

//子类继承base1 base2
class son :public base1, public base2
{
public:
	son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;
};

void test01()
{
	son s;
	cout<<sizeof(s)<<endl;//20
	//多个父类同名成员，加作用域区分
	cout <<"s.base1::m_a = "<<s.base1::m_a << endl;//s.base1::m_a = 100
	cout <<"s.base2::m_a = "<<s.base2::m_a << endl;//s.base1::m_a = 2000
}

int main()
{
	test01();

	system("pause");
	return 0;
}
