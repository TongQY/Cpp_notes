/*
出现重复的数据，利用对组可以返回两个数据
*/
#include<iostream>
using namespace std;
#include<string>
void test01()
{
	//第一种方式
	pair<string, int>p("tom", 12);
	cout << "姓名：\t" << p.first;
	cout << "\t年龄：" << p.second;
	cout << endl;

	//第二种
	pair<string, int>p2 = make_pair("zd", 19);
	cout << "姓名：\t" << p2.first;
	cout << " \t年龄：" << p2.second;
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}