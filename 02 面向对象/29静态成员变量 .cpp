#include<iostream>
using namespace std;

//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员。
/*静态成员分为：
	1.静态成员变量
		所有对象共享同一份数据
	    运行程序的前一步，编译阶段分配内存
		类内声明，类外初始化
	2.静态成员函数
		所有对象共享同一个函数
		静态成员函数只能访问静态成员变量
*/

//静态成员变量
class person
{
public:
	//1.所有对象共享一份内存
	//2.编译阶段分配内存
	//3.类内声明，类外初始化
	static int m_a;
	//静态成员变量也是有访问权限的
private:
	static int m_b;
};

int person::m_a= 100;//类外初始化，int类型的数据，是在person类下的数据
int person::m_b = 66;

void test01()
{
	person p;
	cout << p.m_a << endl;

	person p2;
	p2.m_a = 200;
	cout << p.m_a << endl;//p2将m_a的值修改了，所有 对象 共享同一份数据
}

void test02()
{
	//静态成员变量不属于某一个对象，所有对象共享同一份数据
	//因此静态成员变量两种访问方式

	//1.通过对象访问
	person p;
	cout << p.m_a << endl;

	//2.通过类名访问
	cout << person::m_a << endl;//person作用域下的数据
	//cout << person::m_b << endl;不可访问，因为m_b属于私有权限，类外访问不到
}

int main()
{
	test02();

	system("pause");
	return 0;
}