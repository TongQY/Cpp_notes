#include<iostream>
using namespace std;

//作用 类中的属性初始化

class person
{
public:
	//传统初始化操作
	person(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	//列表初始化赋值
	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
	{

	}

	int m_a;
	int m_b;
	int m_c;

};

void test01()
{
	person p(30,20,10);
	cout <<"p.m_a:"<< p.m_a << "  p.m_b:"<< p.m_b <<"  p.m_c:"<<p.m_c << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}
