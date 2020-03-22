#include<iostream>
using namespace std;
/*
调用时机：
1.使用一个已经创建完毕的对象初始化一个新对象
2.值传递的方式给函数参数传值
3.以值方式返回局部对象
*/

class person
{
public:
	//默认构造
	person()
	{
		cout << "默认构造" << endl;
	}

	//有参构造
	person(int age)
	{
		m_age = age;
		cout << "有参构造" << endl;
	}

	//拷贝构造
	person(const person& p)
	{
		m_age = p.m_age;
		cout << "拷贝构造" << endl;
	}
	//析构函数
	~person()
	{
		cout << "析构" << endl;
	}
	int m_age;
};

//1.使用一个已经创建完毕的对象初始化一个新对象
void test01()
{
	person p1(20);
	person p2(p1);//拷贝构造，初始化p2

	cout << "p2.m_age:" << p2.m_age << endl;
}

//2.值传递的方式给函数参数传值
void dowork(person p)
{

}

void test02()
{
	person p;
	dowork(p);//调用dowork函数时，采用值传递，将person类中的一个的对象p临时拷贝一份，因此调用test时，会出现copy
}

//3.以值方式返回局部对象
person dowork03()
{
	person p1;
	cout << "& p1 = " << (int*)&p1 << endl;
	return p1;//与dowork类似创建副本返回，而不会返回P1本身
}

void test03()
{
	person p3 = dowork03();
	cout << "& p3 = " << (int*)&p3 << endl;
}

int main()
{
	test02();
	test03();

	/*
	默认构造
	拷贝构造
	析构
	析构
	默认构造
	& p1 = 0x71fdd0
	& p3 = 0x71fdd0//按理说不一样，编译器优化
	析构
	*/
	system("pause");
	return 0;
}
