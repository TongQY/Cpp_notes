#include<iostream>
using namespace std;
/*
程序员写了一个类，c++至少给一个类添加三个函数：
01.默认构造函数  无参，函数体空
02.默认析构函数  无参，函数体空
03.默认拷贝构造函数，对属性进行值拷贝
*/
/*
1.用户定义有参构造，c++不再提供无参构造，但是会提供默认拷贝构造
2.如果用户定义拷贝构造函数，c++不会再提供其他构造函数
*/

class person
{
public:

	//拷贝构造
	person(const person &p)
	{
		m_age = p.m_age ;
		cout << "copy constructor " << endl;
	}
	//当我们不写上面这个拷贝构造函数时，系统默认提供一个拷贝构造函数，通过test01，p2的年龄仍为18与p1相等

	//析构
	~person()
	{
		cout << "destructor " << endl;
	}
	int m_age;
};



//03.拷贝构造函数，对属性进行值拷贝

//void test01()
//{
//	person p;
//	p.m_age = 18;
//	
//	
//	person p2(p);//调用拷贝构造函数
//
//	cout << "p2.m_age = " <<p2.m_age << endl;
//
//}


//1.用户定义有参构造，c++不再提供无参构造，但是会提供默认拷贝构造
//测试条件：注释掉我们写的默认构造函数
//如果将class person 中的person删除 下面这个函数，会报错，因为
//class person中存在有参构造，所以不存在无参构造了，调用无参构造，所以会报错

//void test02()
//{
//	person p;
//}
//结果：出错

////验证提供默认拷贝构造
//void test03()
//{
//	person p(19);
//
//	person p2(p);
//	cout << "p2.m_age " << p2.m_age << endl;
//	//结果   p2年龄和p1相同=19
//}


//2.如果用户定义拷贝构造函数，c++不会再提供其他构造函数

int main()
{

	//test01();

	//test02();

	//test03();
	system("pause");
	return 0;
}