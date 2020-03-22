#include<iostream>
using namespace std;

void swap01(int num1, int num2)
{
	cout << "before change " << "num1=" << num1 << " num2=" << num2 << endl;
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "after change " << "num1=" << num1 << " num2=" << num2 << endl;
}

void swap02(int *a, int *b)
{
	cout << "before change " << "a = " << *a << "   b =" << *b << endl;
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << " after change " << "a = " << *a << "   b =" << *b << endl;
}

int main()
{

	int num1 = 5;
	int num2 = 7;
	swap01(num1, num2);
		
	cout << "after  change " << "num1 = " << num1 << " num2 = " << num2 << endl;

	int a = 3;
	int b = 9;
	int* p1 = &a;
	int* p2 = &b;

	swap02(p1, p2);

	cout << "after  change " << "a = " << a << "   b =" <<b << endl;
	
	system("pause");
	return 0;
}