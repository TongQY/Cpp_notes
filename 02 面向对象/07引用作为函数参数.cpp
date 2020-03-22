#include<iostream>
using namespace std;

//值传递，地址传递

//交换函数
//1.值传递
void swap01(int a, int b)
{
	//int a（形参） = a（实参）
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << " b= " << b << endl;
}
//2.地址传递
void swap02(int* a, int *b)
{
	int temp;
	temp = *a;
	*a =* b;
	*b = temp;
	cout << "a= " << *a << " b= " << *b << endl;
}
//3.引用传递
void swap03(int &aa, int &bb)//引用作为形参不需要初始化
{
	//int &aa = a（）
	//swap03调用时，aa是a的别名，二者是同一个东西
	//对引用变量的改变，就是对原来值的改变
	int temp;
	temp = aa;
	aa = bb;
	bb = temp;
	cout << "a= " << aa << " b= " << bb << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//cout << "a= " << a << " b= " << b << endl;

	//swap02(&a, &b);
	//cout << "a= " << a << " b= " << b << endl;

	swap03(a, b);
	cout << "a= " << a << " b= " << b << endl;

	system("pause");
	return 0;
}
