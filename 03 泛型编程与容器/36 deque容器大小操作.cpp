#include<iostream>
using namespace std;
#include<deque>
/*
//没有deque capitaty的限制，只需在中控器，加上地址
*/
void print(const deque<int>& d)
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

	if (d1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "不为空" << endl;
		cout << "大小为：" << d1.size()<< endl;
		//没有容量概念
	}
	d1.resize(15);
	print(d1);

	d1.resize(5);
	print(d1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}