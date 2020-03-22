#include<iostream>
using namespace std;

/*成员变量成员函数分开存储
只有非静态成员变量才属于类的具体对象*/

class person
{

};

void test01()
{
	person p;
	//空对象占用内存 ： 1
	//c++编译器给每个空对象分配一个内存，是为了区分空对象占内存的位置
	//每个空对象也有独一无二的内存地址
	cout << "sizeof(p):" <<sizeof(p)<< endl;
}

class car
{
	int m_a;//非静态成员变量  属于类的对象上
};

void test02()
{
	car c;
	cout << "sizeof(c):" << sizeof(c) << endl;//sizeof =4
}


class zhou
{
	int m_b;//非静态成员变量  属于类的对象上
	static int m_a;//静态成员变量 不属于类对象上

	void func()//非静态函数  不属于类的对象上
	{

	}
	static void func1()//静态函数  不属于类的对象上
	{

	}
};
int zhou::m_a = 521;

void test03()
{
	zhou duo;
	cout << "sizeof(duo):" << sizeof(duo) << endl;//sizeof =4
}

int main()
{
	test01();

	test02();

	test03();

	system("pause");
	return 0;
}
