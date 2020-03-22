#include<iostream>
using namespace std;

int main()
{
	//逻辑 与
	int a = 5;
	//cout << !a << endl;
	//cout << !!a << endl;

	int b = 9;
	cout << (a && b) << endl;

	//同真为真，其余为假

	//逻辑或 || 同假为假，其余为真

	int c = 2;
	int d = 0;

	cout << (c || d) << endl;

	system("pause");
	return 0;

}
