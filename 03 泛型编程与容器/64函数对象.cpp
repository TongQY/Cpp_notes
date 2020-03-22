#include<iostream>
using namespace std;
#include<string>
/*
重载函数调用操作符的类，其对象称为函数对象
函数对象使用重载的（）；行为类似函数调用，称之为仿函数
函数对象使用的时候，可以想普通函数调用，可有参数，返回值
*/

class myadd
{
public:
	int operator()(int v1, int v2)const
	{
		return v1 + v2;
	}
};

void test01()
{
	myadd myadde;
	int ret = myadde(10, 10);//仿函数
	cout << ret << endl;
}

//函数对象可以有自己的状态
class myprint
{
public:
	myprint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;//自己内部状态

};

void test02()
{
	myprint myp;
	myp("hello world");
	myp("hello world");
	myp("hello world");
	myp("hello world");
	cout << "函数调用次数：" << myp.count << endl;
}

//函数对象可以做参数传递
void doprint(myprint& p, string test)
{
	p(test);//默认构造
}
void test03()
{
	myprint mypr;
	doprint(mypr, "hello c++");
}

int main()
{
	test03();
	system("pause");
	return 0;
}