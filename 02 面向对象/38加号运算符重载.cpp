/*
概念：对已有的运算符重新进行定义
赋予其另一种功能，以适应不同的数据类型
*/

//加号运算符重载

//作用：实现两个 自定义 数据类型相加的运算
//内置数据类型，编译器知道如何运算，自定义不知道
//自己写成员函数，实现两个对象相加属性后返回新的对象

#include<iostream>
using namespace std;

//1.成员函数重载+
class person
{
public:

	//1.成员函数重载+号

	//person operator+(person &p2)//只需一个参数
	//本质 
	//person p3 = p1.operator+(p2) 
	//person p3 = p1 + p2;
	 
	//{
	//	person temp;
	//	temp.m_a = this->m_a + p2.m_a;//this 是p1调用指向p1
	//	temp.m_b = this->m_b + p2.m_b;
	//	return temp;
	//}

	int m_a;
	int m_b;

};

//2.全局函数重载+
person operator+(person& p1, person& p2)
	//本质
	//person p3= operator+(p1,p2);
{
	person temp;
	temp.m_a = p1.m_a+p2.m_a ;
	temp.m_b = p2.m_b+p2.m_b ;
	return temp;
}

//运算符重载的过程中也可以函数重载，
person operator+(person& p1, int a)//形参不同，operator+重载

{
	person temp;
	temp.m_a = p1.m_a + a;
	temp.m_b = p1.m_b + a;
	return temp;
}

void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;

	person p2;
	p2.m_a = 10;
	p2.m_b = 20;

	person p4 = p1 + 10;

	cout << "person p4.m_a = " << p4.m_a << endl;
	cout << "person p4.m_b = " << p4.m_b << endl;
}

//2.全局函数重载测试
void test02()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;

	person p2;
	p2.m_a = 10;
	p2.m_b = 20;
	
	person p3 = p1 + p2;
	cout << "person p3.m_a = " << p3.m_a << endl;
	cout << "person p3.m_b = " << p3.m_b << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}
