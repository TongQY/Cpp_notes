#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = 16;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl; //除数不可为0

	double d1 = 6;
	double d2 = 22;

	cout << d1 / d2 << endl;//小数可以相除

	//cout << d1 % d2 << endl;小数不可以取余

	int c = 5;
	int d = 6;
	cout << a++ + b << endl;

	system("pause");
	return 0;
}
