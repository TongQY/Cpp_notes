#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
函数原型：
transform(iterator beg1, iterator end1, iterator beg2, _func);
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象
*/
class trans
{
public:
	int operator()(int v)
	{
		return v+100;
	}
};

class print
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>target;
	
	target.resize(v.size());
	transform(v.begin(), v.end(), target.begin(), trans());//搬运过程可以做运算 

	for_each(target.begin(), target.end(), print());
	cout << endl;
}

int main()
{
	test01();
	system("color 2");
	system("pause");
	return 0;
}