#include<iostream>
using namespace std;

/*
普通类中的成员函数一开始就可以创建
类模板中的成员函数在调用时，才创建
*/

class person
{
public:
	void showperson()
	{
		cout<<"person show"<<endl;
	}
};

class person2
{
public:
	void showperson2()
	{
		cout << "person2 show" << endl;
	}
};

template<class T>
class myclass
{
public:
	T obj;
	//类模板中的成员函数
	void func1()
	{
		obj.showperson();
	}
	void func2()
	{
		obj.showperson2();
	}
};


void test01()
{
	myclass<person2>m1;
	//m1.func1();
	m1.func2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
