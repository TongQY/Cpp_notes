#include<iostream>
using namespace std;
#include<string>

//string 与 char*区别：char*是一个指针
//string 是一个类，类内部封装了char*，管理这个字符串，是一个char*类型的容器
//string构造
void test01()
{
	string s1;//默认构造
	const char* str = "hello world";
	string s2(str);//字符串初始化

	cout << "string s2 = " << s2 << endl;
	string s3(s2);//拷贝构造

	cout << "string s3 = " << s3 << endl;
	string s4(100000, '*');//n个字符初始化
	cout << "string s4 = " << s4 << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}