#include<iostream>
#include<string>
using namespace std;

//字符串比较
//`int compare(const string& s) const; `  //与字符串s比较//c++风格字符串
//`int compare(const char* s) const; `   //与字符串s比较//c语言风格字符串

void test01()
{
	string s1 = "ahllo";
	const char* s2 = "bbllo";

	int ret = s1.compare(s2);

	if (ret == 0) //主要比较是否相等
	
	{
		cout << "s1 等于 s2" << endl;
	}
	else if (ret > 0)
	{
		cout << "s1 大于 s2" << endl;
	}
	else
	{
		cout << "s1 小于 s2" << endl;
	}
}

int main() 
{
	test01();
	system("pause");
	return 0;
}