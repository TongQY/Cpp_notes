#include<iostream>
using namespace std;
#include<string>

template<class T1, class T2>
class person
{
public:
	person(T1 name, T2 age);

	//{
	//	this->m_age = age;
	//	this->m_name = name;
	//}

	void showperson();

	//{
	//	cout << "xingming:" << this->m_age << endl;
	//	cout << "xingming:" << this->m_name << endl;

	//}
	T1 m_name;
	T2 m_age;
};

//构造函数类外实现
template<class T1,class T2>//告诉编译器这是类模板中的成员函数
person<T1,T2>::person(T1 name, T2 age)
{
	//person::person(T1 name, T2 age) 普通成员函数类外实现
	//需要把模板的参数列表加上

	this->m_age = age;
	this->m_name = name;
}

//成员函数类外实现
template<class T1, class T2>
void person<T1, T2>::showperson()

{
	cout << "name:" << this->m_name << endl;
	cout << "age:" << this->m_age << endl;
}

void printperson(person<string, int>& p)
{
	p.showperson();
}

//创建person对象，调用printperson（），进而调用成员函数
void test01()
{
	person<string, int>p1("zh", 19);
	printperson(p1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}