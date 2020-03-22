#include<iostream>
using namespace std;
/*
继承中的对象模型
*/

class base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son :public base1
{
public:
	int m_d;
};

//vs2019
//利用开发人员命令提示工具查看对象模型
//跳转盘符F:
//跳转文件路径 cd 路径
//查看类名
//cl /d1 reportSingleClassLayout类名 文件名 tab

void test01()
{
	//4 12 16  父类中所有非静态成员都会被子类继承下去
	cout << "sizeof(son):" << sizeof(son) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}