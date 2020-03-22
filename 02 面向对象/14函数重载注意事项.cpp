#include<iostream>
using namespace std;

//1.引用作为重载条件
void func1(int &a)
{
	cout << "func1(int &a)调用" << endl;
}

void func1(const int& a)//const int &a = 10; int temp =10;  const int & a = temp;   
{
	cout << "func1(const int &a)调用" << endl;
}


//2.函数重载碰到函数默认参数
void func2(int a,int b=10)
{
	cout << "func2 (int a,int b=10)调用" << endl;
}

void func2(int a)
{
	cout << "func2 (int a)调用" << endl;
}

int main()
{
	int a = 10;

	func1(a);//func(int &a)

	func1(10);//func(const int &a)

	//注意！！！！！
	func1(a = 10);//func(int &a) 调用这行函数时，创建临时变量a 并赋值10；

	//func2(10);//函数重载碰到默认参数 func2,两个函数都能调用，二义性，尽量避免

	system("pause");
	return 0;
}
