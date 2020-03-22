#include<iostream>
using namespace std;
#include<string>
/*
1.类模板没有自动类型推导的使用方法
2.类模板在模板参数列表中可以有默认参数
*/
template<class nametype,class agetype = int>//模板参数列表
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
		cout << "" << this->m_name << endl;
		cout << "" << this->m_age << endl;
		
	}
	nametype m_name;
	agetype m_age;
};


void test01()
{
	//1.类模板没有自动类型推导使用方式
	//person p1("zd", 18);//不能自动推导类型

	//类模板在模板参数列表中可以有默认参数
	person<string> p1("zd", 18);//int 在类模板参数列表默认了
	p1.showperson();
}

void test02()
{
	person<string, int> p1("zho", 18);
	p1.showperson();
}

int main()
{
	test02();


	system("pause");

	return 0;
}