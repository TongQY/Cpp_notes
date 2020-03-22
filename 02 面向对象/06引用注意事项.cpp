//引用作用 给变量起名字

#include<iostream>
using namespace std;

int main()
{
	int a = 10;

	//int& b;//错误 引用必须初始化

	int& b = a;
	
	cout << &a << endl;
	cout << &b << endl;
	//a b的地址相同，相同地址

	//引用一旦初始化，就不可更改 int & b= a 后 int & b = c错误
	int c = 20;

	b = c;//这是赋值，可以进行
	//int& b = c;//不可

	system("pause");
	return 0;
}
