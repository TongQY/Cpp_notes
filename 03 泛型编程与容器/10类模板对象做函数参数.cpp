#include<iostream>
using namespace std;
#include<string>
/*
三种传入方式
1.指定传入的类型  直接显示对象的数据类型
2.参数模板化    将对象中的参数变为模板进行传递
3.整个类模板化  将这个对象类型 模板化进行传递
*/

//类模板对象做函数参数
template<class T1, class T2>
class person
{
public:
	person(T1 name, T2 age)
	{
		this->m_age = age;
		this->m_name = name;
	}

	void showperson()
	{
		cout << this->m_age << endl;
		cout << this->m_name << endl;
	}

	T1 m_name;
	T2 m_age;
};

//1.指定传入类型
void printperson1(person<string, int>& p)
{
	p.showperson();
}
void test01()
{
	person<string, int>p1("zho", 19);
	printperson1(p1);
}

//2.参数模板化
template<class T1,class T2>
void printperson2(person<T1, T2>& p)
{
	p.showperson();
	cout<<"typeid(T1).name(): "<<typeid(T1).name()<<endl;//打印T1 T2的数据类型
	cout<<"typeid(T2).name(): "<<typeid(T2).name() << endl;
}
void test02()
{
	person<string, int>p2("zUO", 19);
	printperson2(p2);
}

//3.整个类模板化
template<class T>
void printperson3(T &p)
{
	p.showperson();
	cout<<"(T).name(): "<<typeid(T).name() << endl;
}

void test03()
{
	person<string, int>p3("zDUO", 19);
	printperson3(p3);
}

int main()
{
	test03();
	system("pause");
	return 0;
}