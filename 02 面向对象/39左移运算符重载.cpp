#include<iostream>
using namespace std;
/*
作用：可以输出自定义数据类型
//1.成员函数重载*/
//2.全局函数重载*/

class person
{
	friend ostream& operator<<(ostream& cout, person p);

public:
	person(int a,int b )//构造函数
	{
		m_a = a;
		m_b = b;
	}

	//利用成员函数重载 左移运算符 p.operator<<(cout)  简化版本p<<cout
	//不能利用成员函数重载<<运算符，因为无法实现cout在左侧

	//void operator<<(cout)
	//{

	//}
private:
	int m_a;
	int m_b;
};

//只能利用全局函数重载左移运算符
ostream& operator<<(ostream & cout, person p)//本质 operator<<(cout,p）简化  cout<<p
{
	cout << "m_a= " << p.m_a << "  m_b= " << p.m_b;
	return cout;//返回本身，才能链式调用
}



void test01()
{
	person p(10,10);
	
	cout << p << endl;
}



int main()
{
	test01();

	system("pause");
	return 0;
}
*/