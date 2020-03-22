#include<iostream>
using namespace std;
#include<string>
/*
* `int find(const string& str, int pos = 0) const;`              //查找str第一次出现位置,从pos开始查找
* `int find(const char* s, int pos = 0) const; `                     //查找s第一次出现位置,从pos开始查找
* `int find(const char* s, int pos, int n) const; `               //从pos位置查找s的前n个字符第一次位置
* `int find(const char c, int pos = 0) const; `                       //查找字符c第一次出现位置
* `int rfind(const string& str, int pos = npos) const;`      //查找str最后一次位置,从pos开始查找
* `int rfind(const char* s, int pos = npos) const;`              //查找s最后一次出现位置,从pos开始查找
* `int rfind(const char* s, int pos, int n) const;`              //从pos查找s的前n个字符最后一次位置
* `int rfind(const char c, int pos = 0) const;  `                      //查找字符c最后一次出现位置
* `string& replace(int pos, int n, const string& str); `       //替换从pos开始n个字符为字符串str
* `string& replace(int pos, int n,const char* s); `                 //替换从pos开始的n个字符为字符串s
*/

//string构造
void test01()
{
	string s1;//char*类型字符串 赋值给当前的字符串
	s1="hello world";
	int pos =s1.find("w");

	if (pos == -1)//没有查找到返回值为-1
	{
		cout << "没找到" << endl;
	}
	else 
	{
		cout << pos << endl;//6
	}
	//rfind,从右往左查找
	
	pos = s1.rfind("ld");
	if (pos == -1)
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << pos << endl;//9
	}

}

//替换
void test02()
{
	string s1c = "abcdefghig";//从1号位起，三个字符替换为really

	s1c.replace(1, 3, "really");
	cout << s1c << endl;
}

int main()
{

	test02();
	test01();

	system("pause");
	return 0;
}