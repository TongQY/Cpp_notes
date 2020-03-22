#include<iostream>
using namespace std;
#include<string>

int main()
{
	int a = 0;
	cout << "int:" << endl;
	cin >> a;
	cout << "int a = " << a << endl;

	double f = 3.14;
	cout << "double:" << endl;
	cin >> f;
	cout << "double a = " << f << endl;

	char char2 = 'a';
	cout << "char2" << endl;
	cin >> char2;
	//cout << "char2=" << char2 << endl;
	printf("char2=%d\n", char2);

	string ch = "hello";
	cout << "reset ch: " << endl;
	cin >> ch;
	cout << "ch =" << ch << endl;

	bool falg = false;
	cout << "bool falg: \n";
	cin >> falg;//从用户读取true或者false给false赋值
	cout << "bool = " << falg << endl;

	system("pause");
	return 0;
}
