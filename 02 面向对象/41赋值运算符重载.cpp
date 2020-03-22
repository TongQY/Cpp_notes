#include<iostream>
using namespace std;
/*
c++编译器至少给一个类添加4个函数
1.默认构造函数（无参，函数体为空）
2.默认析构函数（无参，函数体为空）
3.默认拷贝构造函数，对属性进行值拷贝
4.赋值运算符operator=，对属性进行值拷贝

如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题
*/
//赋值运算符重载

class person
{
public:
	person(int age)
	{
		m_age = new int(age);
	}
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//重载赋值运算符
	person& operator=(const person &p1)
	{
		if (this->m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
			m_age = p1.m_age;	
		}
		//深拷贝
		m_age  = new int(*p1.m_age);
		return *this;
	}
	int * m_age;
};

void test01()
{
	person p1(18);

	person p2(20);

	person p3(30);

	p3 = p2 = p1;
	cout << *p1.m_age<<endl;
	cout << *p2.m_age <<endl;
	cout << *p3.m_age << endl;
	//先p2释放内存，然后p1
}

int main()
{
	test01();
	int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	//内置类型允许
	cout << a << b << c<<endl;
	system("pause");
	return 0;
}
