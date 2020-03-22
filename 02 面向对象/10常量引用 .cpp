#include<iostream>
using namespace std;

//作用，修饰形参，防止误操作

//在函数形参列表中加const修饰形参，防止形参改变实参

//打印数据函数
void shownumber(const int& val)//int* const val = &a;
{
	//val = 1000;参数为(int& val)时，在子函数中可以重新赋值，可能二次赋值
	//val = 1000;参数为(const int& val)时，val是定值，无法通过子函数修改
	cout << "val = " << val << endl;
}


int main()
{
	//常量引用
	//使用场景：修饰形参，防止误操作

	//int a = 10;
	//int& ref = 10;//error，引用必须是一块合法的内存空间，10是字面量

	//const int& ref = 10;
	//加上const后，编译器将代码修改   int temp = 10; const int & ref = temp;
	//系统为编译器定义临时原名，将10赋给临时变量，然后再去引用它
	//const int& ref = 10;
	//ref = 10;//const无法修改

	int a = 100;
	shownumber(a);//传过去的应该是a的地址

	system("pause");
	return 0;
}
