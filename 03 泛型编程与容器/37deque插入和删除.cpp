#include<iostream>
using namespace std;
#include<deque>

void print(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
		
	}cout << endl;
}

//两端操作
void test01()
{
	deque<int>d1;

	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(30);
	d1.push_front(40);

	print(d1);
	//尾删
	d1.pop_back();
	print(d1);
	//头删
	d1.pop_front();
	print(d1);
}

void test02()//指定位置删除
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	print(d1);

	//insert 插入
	d1.insert(d1.begin(), 1000);
	print(d1);

	d1.insert(d1.begin(), 2,100000);
	print(d1);

	//按照区间插入
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	print(d1);
}

//删除
void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	//删除按照区间
	d1.erase(d1.begin(), d1.end()-2);
	print(d1);

	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	print(d1);

	//清空
	d1.clear();
	print(d1);
}
int main()
{
	test03();
	system("pause");
	return 0;
}