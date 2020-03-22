#include<iostream>
using namespace std;
#include<string>
/*
作用：建立一个通用类，类中的成员 数据类型可以不确定 用一个虚拟的类型来代表。
*/

template<class nametype,class agetype>
class person
{
public:
	person(nametype name, agetype age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void showperson()
	{
		cout << "" << this->m_age << endl;
		cout << "" << this->m_name<< endl;
	}
	nametype m_name;
	agetype m_age;
};

void test01()
{
	person<string, int>p1("zd", 19);
	p1.showperson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}