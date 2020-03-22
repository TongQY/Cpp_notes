//bool 类型只占一个字节

#include<iostream>
using namespace std;

int main()
{
	//1.创建一个bool类型
	//2.所占空间	
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	cout << "sizeof(bool) = " << sizeof(bool) << endl;


	system("pause");
	return 0;
}