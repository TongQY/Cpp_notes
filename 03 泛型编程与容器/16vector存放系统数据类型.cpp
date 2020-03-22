#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myprint(int val)
{
	cout << val << endl;
}

void test01()
{
	//创建了vector容器，数组
	vector<int> v;

	//向容器插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问

	vector<int>::iterator itBegin = v.begin();//v.begin 起始迭代器，指向容器中第一个元素
	vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个位置

	//第一种遍历方式
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//第二种访问方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//vector<int>::iterator it  拿到vector<int>这种容器的迭代器
	{
		cout << *it << endl;
	}

	//第三种遍历方式，利用stl提供遍历算法
	for_each(v.begin(), v.end(), myprint);
}

//容器  vector
//算法  for_each;
//迭代器 vector<int>::iterator

int main()
{
	test01();
	system("pause");
	return 0;
}