#include<iostream>
using namespace std;
#include<string>
/*
* `string& operator+=(const char* str);`                   //重载+=操作符
* `string& operator+=(const char c);`                         //重载+=操作符
* `string& operator+=(const string& str);`                //重载+=操作符
* `string& append(const char *s); `                               //把字符串s连接到当前字符串结尾
* `string& append(const char *s, int n);`                 //把字符串s的前n个字符连接到当前字符串结尾
* `string& append(const string &s);`                           //同operator+=(const string& str)
* `string& append(const string &s, int pos, int n);`//字符串s中从pos开始的n个字符连接到字符串结尾
*/

//string构造
void test01()
{
	string s1;
	s1="我";
	s1 += " 喜欢学习";
	cout << "string s1 = " << s1 << endl;
	//string s1 = 我 喜欢学习
	s1 += "、";
	cout << "string s1 = " << s1 << endl;
	//string s1 = 我 喜欢学习、
	string s2("和玩");
	s1 += s2;
	cout << "string s2 = " << s1 << endl;
	//string s2 = 我 喜欢学习、和玩
	string s3;  
	s3 = 'I';
	s3.append(" LOVE ");
	cout << "string s3 = " << s3 << endl;

	s3.append("YOU really much！！！",10);
	cout << "string s4 = " << s3 << endl; 
	//string s4 = I LOVE YOU really

	string s5;
	s5.append(s3);
	cout << "string s5 = " << s5 << endl;
	//string s4 = I LOVE YOU really
	
	string s6;
	s6.append(s5,2,7);
	cout << "string s6 = " << s6 << endl;
	//string s6 = LOVE YO

	string s7;
	s7.append(21, '*');
	cout << "string s7 = " << s7 << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
