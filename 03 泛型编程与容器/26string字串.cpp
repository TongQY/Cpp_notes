#include<iostream>
using namespace std;
#include<string>
/*
* `string substr(int pos = 0, int n = npos) const;`   //返回由pos开始的n个字符组成的字符串
*/
void test01()
{
	string str = "abcdefg";
	string subs = str.substr(1, 3);
	cout << "strs = " << subs << endl;
	//bcd
}

//使用实例 获取用户名
void test02()
{
	string email = "zd@gmail.com";
	

	int pos = email.find('@');

	cout << pos << endl;//字符位置是从0开始数
	string username = email.substr(0, pos );
	cout << username << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}