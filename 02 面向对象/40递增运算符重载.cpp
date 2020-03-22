#include<iostream>
using namespace std;
/*
通过重载递增运算符，实现自己的整形数据
 */

//重载递增

//自定义整型
class Myinteger
{
	friend ostream& operator<<(ostream& cout, Myinteger myint);

public:
	Myinteger()
	{
		m_num = 0;
	}

	//重载前置++运算符
	Myinteger& operator++()//返回引用是为了一直对一个数据进行递增操作
	{
		//先++运算，然后再将自身返回，返回类型是&类型,返回的地址相同
		m_num++;
		return *this;
	}

	//重载后置++运算符
	//void operator++(int)，int代表占位参数，可用于区分前置和后置递增
	Myinteger operator++(int)//后置递增返回值
	{
		//先运算,记录当时结果
		Myinteger temp = *this;
		//后递增
		m_num++;
		//最后将记录结果返回
		return temp;
	}

private:
	int m_num;

};

//重载左移运算符//对于++(++myint)，相当于进行两次计算，因此每次（第一次）返回的是自身，下次的计算才会正确
ostream & operator<<(ostream &cout, Myinteger myint)
{
	cout << myint.m_num;
	return cout;
}

//前置递增
void test01()
{
	Myinteger myint;
	
	cout << ++(++myint) << endl;//如果返回值为 operator那么，返回值是一个新的myint，
	cout << myint << endl;//返回引用是为了一直对一个数据进行递增操作
}

//后置递增
void test02()
{
	Myinteger myint;
	cout <<myint++ << endl;
	cout << myint << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}
