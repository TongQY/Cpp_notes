#include<iostream>
using namespace std;

/*
多态分为两类
静态多态：函数重载，和运算符重载属于静态多态，复用函数名
动态多态：派生类和虚函数实现运行时多态

动态多态与静态多态的区别
静态多态的函数地址早绑定 编译阶段确定函数地址
动态多态的函数地址晚绑定 运行阶段确定函数地址
*/

/*
条件
1.有继承关系
2.子类重写父类中的虚函数
重写，函数返回值类型 参数名 参数列表完全相同 

动态多态使用
//父类的指针或者引用 指向子类对象*/



//多态
//动物类

class animal
{
public:
	virtual void speak()
	{
		cout << "wawawa" << endl;
	}
};

//猫类
class cat :public animal
{
public:
	void speak()
	{
		cout << "miao~~~~" << endl;
	}
};

//狗类
class dog :public animal
{
public:
	void speak()
	{
		cout << "wang！！！" << endl;
	}
};

//执行说话的函数
//地址早绑定，编译阶段确定函数地址
//如果执行猫说话，地址不能提前绑定
void dospeak(animal & an)//animal &an = cat //父类的引用指向子类的对象
{
	an.speak();
}

void test01()
{
	cat catter;
	dospeak(catter);
	//an所指的内存中的虚函数表的speak()的位置已经被cat::speak()函数地址所取代，
	//于是在实际调用发生时，是cat::f()被调用了。这就实现了多态。


	dog dogger;
	dospeak(dogger);
}

int main()
{
	test01();
	system("pause");
	return 0;
}