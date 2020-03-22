#include<iostream>
using namespace std;
/*
常函数：
成员函数后加上const成为常函数
常函数不可以修改成员属性，成员属性声明时加关键字mutable，在常函数中依然可以修改
*/

/*
常对象：
声明对象前加上const称该对象为常对象
常对象只能调用常函数
*/

//常函数
class person
{
public:
	//const person *const  this
	//在成员函数后面加const，修饰的是this指向的值，让指针指向的值也不可修改
	//void showperson() const

	//常函数
	void showperson() const
	{
		//this=NULL;this不能指向NULL；因为已经指向了调用它的函数
		//this->m_a=100;
		//m_a = 100;
		 this->m_b = 100;
		 cout << "m_a:" << m_a << endl;
	}

	//测试普通函数
	void test01()
	{
		m_a = 100;
	}
	int m_a=10;
	mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值

};


//常函数
void func1()
{
	person p;
	p.showperson();
}

//常对象
void func2()
{
	const person p;//常对象
	//p.m_a = 100;//错误，p是常对象
	p.m_b = 100;//mutable int m_b,常函数常对象都可以修改类中这个int_b属性

	//常对象只能调用常函数
	//1.调用常函数
	p.showperson();
	//2.调用一般函数
	//p.test01()
	//调用失败，因为常对象不允许修改属性的值，如果调用成功test01，那么
	//tese01执行时将m_a修改为100，相当于间接修改了常函数的m_a属性
}

int main()
{
	func1();
	system("pause");
	return 0;
}
