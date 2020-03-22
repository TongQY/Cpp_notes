#include"39 swap.h"

//函数定义
void swap(int num1, int num2)
{
	cout << "before change " << "num1=" << num1 << " num2=" << num2 << endl;

	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "after  change " << "num1=" << num1 << " num2=" << num2 << endl;
}
