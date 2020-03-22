#include<iostream>
using namespace std;

//1.无参无反
void text01()
{
	cout << "this is 1" << endl;
}
//2.有参数无返回
void text02(int a )
{
	cout << "this is 2" <<"  xingcan = "<<a<< endl;
}
//3.无参数有返回
int text03()
{
	cout << "this is 3" << endl;
	return 3333;
}
//4.有参有反
int text04(int a)
{
	cout << "this is text 4" <<"   4 xingcan = "<< a << endl;
		return 4;
}

int main()
{
	//1.无参无反函数调用
	text01();
	//2.有参无反函数调用
	text02(2);
	//3.无参有返
	int a;
	a = text03();
	cout <<"return 3 = "<< a << endl;
	//4.有参有返
	int b;
	b = text04(4);
	cout << b << endl;
	
	system("pause");
	return 0;
}
