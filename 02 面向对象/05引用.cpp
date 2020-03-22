//引用 变量别名

#include<iostream>
using namespace std;

int main()
{
	//引用基本语法
	int a = 10;
	//创建应用
	int& b = a;
	b = 20;
	cout << a << endl;//a = 20;

	system("pause");
	return 0;

}
