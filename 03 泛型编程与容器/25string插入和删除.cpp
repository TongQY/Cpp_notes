#include<iostream>
using namespace std;
#include<string>
/*
* `string& insert(int pos, const char* s);  ` //插入字符串
* `string& insert(int pos, const string& str);//插入字符串
* `string& insert(int pos, int n, char c); `  //在指定位置插入n个字符c
* `string& erase(int pos, int n = npos); `    //删除从Pos开始的n个字符
*/
void test01()
{
	string str = "hello";
	//插入
	str.insert(1, "11");//把1号位置替换成11
	cout << "str = " <<str<< endl;
	//str = h11ello
	//删除
	str.erase(1, 3);//从一号位置删除
	cout << "str = " << str << endl;
	//str = hello
}

int main()
{
	test01();
	system("pause");
	return 0;
}