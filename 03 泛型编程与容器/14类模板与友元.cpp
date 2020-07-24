#include<iostream>
using namespace std;
#include<string>
//通过全局函数打印person信息


//让编译器知道有person类模板
template<class T1, class T2>
class person;

//让编译器知道有个全局函数模板
template<class T1, class T2>
void printperson2(person<T1, T2> p)
{
	cout << " p.m_age:" << p.m_age << endl;
	cout << " p.m_name:" << p.m_name << endl;
}

template<class T1,class T2>
class person
{
public:
	//1.类内实现

	//friend void printperson(person<T1, T2> p)
	//{
	//	cout << " p.m_age:" << p.m_age << endl;
	//	cout << " p.m_name:" << p.m_name<<endl;
	//}

	//2.类外实现
	//空模板的参数列表或者template<class T1,class T2>
	//如果全局函数类外实现，需要让编译器提前直到这个函数的存在
	friend void printperson2<>(person<T1, T2> p);//函数模板！  的声明

public:
	person(T1 name ,T2 age)
	{
		this->m_age = age;
		this->m_name = name;
	}
private:
	T1 m_name;
	T2 m_age;
};

void test02()
{
	person<string, int>p("zho", 19);
	printperson2(p);
}

int main()
{
	test02();
	system("pause");
	return 0;
}
