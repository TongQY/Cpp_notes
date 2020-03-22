#include<iostream>
using namespace std;
#include<string> 
/*
函数调用运算符重载
由于重载后使用的方式非常像函数的调用，因此称为仿函数
使用灵活无固定写法,（不同类新）
*/

class myprint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test01()
{
	myprint print;
	print("hello world");//使用起来像函数，称之为仿函数
}

//重载后使用的方式非常像函数的调用，因此称为仿函数

class myadd
{
public:

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	myadd add;
	int a =add(5, 6);
	cout << a << endl;

	//匿名函数对象 myadd()创建一个匿名的对象
	cout << myadd()(100, 100) << endl;
}


int main()
{
	test02();

	system("pause");
	return 0;
}