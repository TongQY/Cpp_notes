#include<iostream>
using namespace std;

int main()
{
	//三只小猪 a b c 输入体重，判断谁最重
	//
	//a b 
	//	a重 a  c
	//		a重     a重
	//		c重		c重
	//
	//	b重 b  c
	//		b重     b重
	//		c重		c重
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "putchar a = kg" << endl;
	cin>>a;

	cout << "putchar b = kg" << endl;
	cin >> b;

	cout << "putchar c = kg" << endl;
	cin >> c;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	//判断 a  b
	if (a > b)
	{
		if (a > c)
		{
			cout << "a is the heaviest" << endl;
		}
		else
		{
			cout << "c is the heaviest" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "b is the heaviest" << endl;
		}
		else
		{
			cout << "c is the heaviest" << endl;
		}
	}

	system("pause");
	return 0;
}