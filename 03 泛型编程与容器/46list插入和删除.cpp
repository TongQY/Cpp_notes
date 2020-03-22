#include<iostream>
using namespace std;
#include<list>

void print(const list<int>& l1)
{
	for (list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>l1;
	//尾插
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//头插
	l1.push_front(100);
	l1.push_front(200);
	l1.push_front(300);
	print(l1);

	//尾删
	l1.pop_back();
	print(l1);
	//头删
	l1.pop_front();
	print(l1);

	//insert 插入
	l1.insert(l1.begin(), 1000);
	print(l1);

	//偏移
	list<int>::iterator it = l1.begin();
	l1.insert(++it,100000);//只能逐个访问
	l1.insert(++it, 100000);
	print(l1);

	//删除
	it = l1.begin();
	l1.erase(it++);
	print(l1);

	//移除
	l1.remove(100000);
	print(l1);

	//清空
	l1.clear();
	print(l1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}