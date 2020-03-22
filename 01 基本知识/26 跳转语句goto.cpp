#include<iostream>
using namespace std;

int main()
{
	//goto 标记；
	//如果标记存在，执行到goto语句时，会跳转到标记的位置
	cout << "1." << endl;
	cout << "2." << endl;
	goto FLAG;
	cout << "3." << endl;//不执行
	cout << "4." << endl;//不执行
	FLAG:
	cout << "5." << endl;
	
	system("pause");
	return 0;
}