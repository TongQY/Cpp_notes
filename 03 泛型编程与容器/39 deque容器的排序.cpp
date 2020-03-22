#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//标准算法头文件

void print(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it <<" ";
	}cout << endl;
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	//300 200 100 30 20 10
	print(d);
	//排序
	//默认从小到大排序
	//对于支持随机访问的迭代器，可以排序
	sort(d.begin(), d.end());
	print(d);
}

int main()
{
	test01();
	system("pause");
	return 0;
}