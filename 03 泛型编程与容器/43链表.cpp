#include<iostream>
using namespace std;
#include<list>
/*
将数据进行链式存储
链表由节点组成 （包括数据域和指针域）
stl中的链表是双向循环链表
缺点：对应元素遍历次数没有数组快
占用空间比数组大

链表的存储方式不是连续的空间，因此链表list中的迭代器仅支持前移和后移，属于双向迭代器
list优点:动态内存分配
链表执行插入和删除方便，修改指针即可，不需要移动大量元素
插入和删除不会造成原有list迭代器失效，这在vector中不成立
*/

void print(const list<int>& l1)
{
	for (list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it<<" ";
	}
	cout << endl;
}

//list容器的构造函数

void test01()
{
	//创建数据
	list<int>l1;

	//添加元素
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//遍历容器
	print(l1);

	//区间构造
	list<int>l2(l1.begin(), l1.end());
	print(l2);

	//拷贝构造
	list<int>l3(l2);
	print(l3);

	//n个elem
	list<int>l4(10, 100);
	print(l4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}