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
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	print(l1);

	//判断容器是否为空
	if (l1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "元素个数为：" << l1.size() << endl;
	}

	//重新指定大小
	l1.resize(10,3);//指定大小为10，不够的用3填充
	print(l1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}