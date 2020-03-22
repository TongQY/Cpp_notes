//代码区  代码和注释
//全局区  全局变量 静态变量 常量
//栈  编译器分配释放   局部变量 参数
//堆  程序员分配释放   结束时自动回收
//不同区域存放的数据 有不同的生命周期  灵活编程
//程序运行前只有代码区 全局区，运行后才有栈区和堆区

//代码区 存放二进制机器指令
//数据共享 防止浪费  、代码只读，防止程序意外改变
//全局区         全局变量 静态变量 常量
//普通局部变量    函数体内的变量都是局部变量
//全局区，该区域数据在程序结束后由操作系统释放
#include<iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰全局变量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//局部变量
	int a = 10;
	int b = 10;

	cout << " local variable (int)&a: " <<(int)&a<< endl;
	cout << " local variable (int)&b: " << (int)&b << endl;

	cout << "global variable (int)&g_a:" << (int)&g_a << endl;
	cout << "global variable (int)&g_b:" << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "static variable (int)&s_a:" << (int)&s_a << endl;
	cout << "static variable (int)&s_b:" << (int)&s_b << endl;

	//常量
	//字符串常量
	cout << "string constant (int)&hello world :" << (int)&"hello world" << endl;
	
	//const修饰的变量
	//const修饰的全局变量  
	cout << "const global variable (int)&c_g_a:" << (int)&c_g_a << endl;
	cout << "const global variable (int)&c_g_b:" << (int)&c_g_b << endl;
	
	//const修饰的局部变量
	const int c_a = 10;
	const int c_b = 10;

	cout << "const local variable (int)&c_a: " << (int)&c_a << endl;
	cout << "const local variable (int)&c_b: " << (int)&c_b << endl;

	system("pause");

	return 0;
}