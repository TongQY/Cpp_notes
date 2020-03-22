#include<iostream>
using namespace std;
//本质，指针常量
//指针的指向地址不可修改，指向的值可改

//引用被编译器识别为 int * const ref = &a;
void func(int& ref)
{
	ref = 100;//ref是引用，转化为   * ref = 100
}

int main()
{
	int a = 10;

	//自动转化为 int *const ref =&a;const修饰ref（地址）
	int& ref = a;
	ref = 20;//编译器发现ref是引用，自动转化为 *ref = 20;

	cout << "a:" <<a<< endl;   //a是int类型
	cout << "ref:" << ref << endl;//ref 本质是指针类型，不过此处是*ref类型

	system("pause");
	return 0;
}
