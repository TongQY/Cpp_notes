#include<iostream>
using namespace std;

int main()
{
	//创建三个变量
	//a b 比较，将大的给c

	int a = 10;
	int b = 20;
	int c;

	c = (a > b ? a : b);

	cout << "c = " << c <<endl;
	
	//c++中，三目运算符返回变量值，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	/*
	输出结果：
	c = 20
	a = 10
	b = 100
	*/
	system("pause");
	return 0;
}