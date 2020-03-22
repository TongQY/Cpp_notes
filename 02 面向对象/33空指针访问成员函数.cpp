#include<iostream>
using namespace std;
/*
c++中空指针也是可以调用成员函数的
但要注意有没有用到this指针
如果用到，需要判断保证代码的健壮性
*/

//空指针调用成员函数
class person
{
public:
	void showclassname()
	{
		cout << "this is person class" << endl;
	}
	void showpersonage()
	{
	

		if (this == NULL)//提高代码的健壮性，防止空指针出错
		{
			return;
		}  

		cout << "age ="<<this->m_age << endl;
	}
	int m_age=10;
};


void test01()
{
	person* p= NULL;
	p->showclassname();//空指针可以访问成员
	//虽然是空指针，但是成员函数并没有用到这个空指针，因此可以正常运行
	
	//p->showpersonage();
	//showpersonage(null);
	//访问了null->m_age,即*null.m_age,        
	p->showpersonage();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
/*
首先，类的成员函数并不与特定对象绑定，所有成员函数共用一份成员函数体，当程序编译后，成员函数的地址即已经确定。
那为什么同一个类的不同对象调用对应成员函数可以出现不同的结果呢，答案就是this指针。
共有的成员函数体之所以能够把不同对象的数据区分开来，靠的是隐式传递给成员函数的this指针，
成员函数中对成员变量的访问都是转化成"this->数据成员"的方式。因此，从这一角度说，成员函数与普通函数一样，
只是多了一个隐式参数，即指向对象的this指针。
因此当所调用的成员函数有需要访问对象元素(showpersonage())时，由于没有this指针()，就会导致不能正确执行。
其实，上例中的showclassname()方法，并不是成员函数，其只是在类中定义的普通函数。
*/