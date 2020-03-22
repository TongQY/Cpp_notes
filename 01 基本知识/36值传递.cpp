#include<iostream>
using namespace std;
/**/
void swap(int num1, int num2)
{
	cout << "before change " << "num1="<< num1 << " num2="<<num2 << endl;

	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "after  change " << "num1=" << num1 << " num2=" << num2 << endl;	
}

int main()
{
	int a = 5;
	int b = 9;

	swap(a, b);

	//值传递，不影响a b
	cout << "after  change " << "a = " << a << " b = " << b << endl;
	
	system("pause");
	return 0;
}
