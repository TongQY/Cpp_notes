//指针 = 地址 
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* p = NULL;//指针指向置空
	p = &a;
	cout << "p = " << p << endl;

	*p = 1000;
	cout << "*p = " << *p << endl;
	cout << " a = " << a  << endl;

	system("pause");
	return 0;
}
