/*
c++成员变量和成员函数是分开存储的
每一个非静态成员函数只会诞生一份函数实例，也就是说多个 同类型 的对象会用同一块代码
这个函数如何区分是哪个对象调用自己？

c++通过提供特殊的对象指针，this指针，解决问题。this指针指向被调用的成员函数所属的对象

this 指针是隐含每一个非静态成员函数内的一种指针
this 指针不需要定义，直接使用即可

用途
形参和成员变量同名时，可用this指针区分

在类的非静态成员函数中返回对象本身，可使用return *this
*/

#include<iostream>
using namespace std;
/**
1.解决名称冲突
2.返回对象本身 *this*/

class person
{
public:
	person(int age)
	{
		//this指针指向被调用的成员函数(此处是test01中的p1被调用)所属的对象
		//this指向p1
		this->age = age;
	}

	//返回类型为person&时，根据函数拷贝，返回的是p本身，不会创建新对象
	//返回类型是person时，系统copy一份p'作为返回值，不再是p本身
	person& personaddage(person &p)
	{
		this->age += p.age;

		//tihs 是指向p2的指针，*this 指向的是p2本体
		return *this;
	}
	int age;//成员名称 和 形参名称相同时，会出错
};

void test01()
{
	person p1(18);
	cout << "p1.age :"<<p1.age <<endl;
}

//2.返回对象本身用* this
void test02()
{
	person p1(10);

	person p2(10);

	p2.personaddage(p1);

	//如果想多调用几次如下
	//p2.personaddage(p1).personaddage(p1).personaddage(p1);
	//void personaddage(person &p)，返回类型为空.personaddage(p1).personaddage(p1);无法再调用

	//如果返回类型还是p2那就可以再调用了

	//想再加一次
	p2.personaddage(p1).personaddage(p1).personaddage(p1);//链式编程
	cout << "p2.age : " << p2.age << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}
