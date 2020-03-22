#include<iostream>
using namespace std;
#include<deque>

void print(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	print(d1);

	//1.=赋值，operator赋值
	deque<int>d2;
	d2 = d1;
	print(d2);

	//2.assign赋值
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	print(d3);

	deque<int>d4;
	d4.assign(10, 100);
	print(d4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}