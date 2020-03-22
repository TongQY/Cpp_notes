#include<iostream>
using namespace std;
#include<string>
/**/
//有些特定的数据类型需要具体化的方式需要具体化方式
                                                  
//对比两个数据是否相等
class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->age = age;
	}
	string m_name;
	int age;
};
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
template<class T>
bool mycompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化person 的版本实现
template<>bool mycompare(person& a, person& b)
{
	if (a.age == b.age && a.m_name == b.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test02()
{
	person p1("tom", 10);
	person p2("tom", 10);

	bool ret = mycompare(p1, p2);

	if (ret)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}

void test01()
{
	int a = 10, b = 20;

	bool ret=  mycompare(a, b);

	if (ret) 
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}

int main()
{
	test02();


	system("pause");

	return 0;
}