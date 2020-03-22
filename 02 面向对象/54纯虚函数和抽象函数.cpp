#include<iostream>
using namespace std;

/*
在多态中，通常父类的虚函数是毫无意义的，主要调用子类重写的内容

因此可以将虚函数改为纯虚函数*/

// virtual void func() = 0；
//当类中有了纯虚函数，这个类也被叫做抽象类
//抽象类特点
/*
1.无法实例化对象
2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/

class base
{
public:
	virtual void func() = 0;
};

//1.无法实例化对象
void test00()
{
	//base b;不允许实例化抽象类的对象
	//new base；
}

class son1 :public base
{
public:
};

void test01()
{
	//son1 b;//子类未重写抽象类中的纯虚函数，自身也变为纯虚函数
	//new son1；
}

class son2 :public base
{
public:
	virtual void func()
	{
		cout << "func 函数调用" << endl;
	}
};

void test02()
{
	base *ba = new son2;
	ba->func();
}

int main()
{
	test02();

	system("pause");
	return 0;
}
