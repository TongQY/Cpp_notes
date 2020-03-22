#include<iostream>
using namespace std;

void func(int a, int b = 10);
void func(int a, int )//10 占位
{
	cout << "xi wang ni kai xin" << endl;
	cout << endl;
}

int main()
{

	func(10);

	func(10, 20);
	system("pause");

	return 0;
}
