#include<iostream>
using namespace std;

//c++中，函数的形参列表中形参可以有默认值
int func(int a , int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//1.如果某个位置有默认参数，从这个位置往后，都要有默认参数

//2.如果函数声明有默认参数，函数定义（函数实现）的时候不能有默认参数
//声明和实现只能有一个有参数

int func1(int a = 10, int b = 10);

//int func1(int a = 10, int b = 10)//错误，函数定义（函数实现）时不能有默认参数
//{
//	return a + b;
//}


int main()
{
	
	func(10);
	cout << "a+b+c= "<< func(10)<< endl;//60

	func(10, 50);
	cout << "a+b+c= " << func(10,50) << endl;//90

	return 0;
}
