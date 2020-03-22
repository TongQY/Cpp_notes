#include<iostream>
using namespace std;

//函数名称可以相同 提高复用性
//重载条件
//1.同一个作用域下  本例中都在全局作用域
//2.函数名称相同
//3.函数参数类型不同，个数不同或者多个参数的顺序不同
//注意事项，函数的返回值不能作为返回条件

void func()
{
	cout << "func()调用" << endl;
}

void func(int a)
{
	cout << "func(int a)调用" << endl;
}

void func(double a)
{
	cout << "func(double a)调用" << endl;
}

void func(int a ,double b)
{
	cout << "func(int a ,double b)调用" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)调用" << endl;
}

int main()
{
	func();//func()调用
	func(317);//func(int a)调用
	func(3.17);//func(double a)调用
	func(317, 3.17);//func(int a, double b)调用
	func(3.17, 317);//func(double a, int b)调用

	system("pause");
	return 0;
}
