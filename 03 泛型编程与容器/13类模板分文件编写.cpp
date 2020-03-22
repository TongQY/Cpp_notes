/*
类模板分文件编写与问题 类模板的成员函数在编译时调用，会导致链接不到
*/

//1.直接包含源文件
//#include"13person.cpp"

//第二种方式将.h  .cpp写到一起将后缀写为.hpp
#include"13person.hpp"

#include<iostream>
using namespace std;

void test01()
{
	person<string, int>p1("zou", 19);
	p1.showperson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}

