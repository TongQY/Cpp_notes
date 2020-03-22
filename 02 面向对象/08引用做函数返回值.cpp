#include<iostream>
using namespace std;

int& test01()//函数返回值为引用型
{
	int a = 10;//局部变量在  栈区
	return a;
}

int& test02()//函数返回值为引用型
{
	static int a = 10;//静态变量在  全局区，在整个程序结束后释放
	return a;
}

int main()
{
	//引用做函数返回值
	//1.不要返回局部变量的引用
	int& ref1 = test01();//创建引用变量    即ref = a

	cout << "ref1 = " << ref1 << endl;//第一次正确，编译器做了保留
	cout << "ref1 = " << ref1 << endl;//第二次错误，a的内存已经释放

	//2.函数的调用可以做为左值
	int& ref2 = test02();//创建引用变量  ref是别名   即ref = a

	cout << "ref2 = " << ref2 << endl;//
	cout << "ref2 = " << ref2 << endl;//
	
	test02() = 1000;//函数返回值是引用，相当于返回a  此时test02（）=a;a=1000;

	cout << "ref2 = " << ref2 << endl;//
	cout << "ref2 = " << ref2 << endl;//

	system("pause");
	return 0;
}
