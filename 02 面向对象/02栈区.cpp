#include<iostream>
using namespace std;

//不能返回局部变量的地址
int * func(int b)//形参也在栈区
{
	b = 100;
	int a = 10;
	return &a;
}

int main()
{
	int* p = func(1);

	cout << "*p = " << *p << endl;//第一次打印正确，防止误操作
	cout << "*p = " << *p << endl;//错误，func调用后被回收

	system("pause");

	return 0;

}
