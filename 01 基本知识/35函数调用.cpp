#include<iostream>
using namespace std;

int sum(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 5;
	int b = 9;

	sum(a,b);

	int c = sum(a, b);
	cout << "sum = " << c << endl;
	system("pause");

	return 0;
}
