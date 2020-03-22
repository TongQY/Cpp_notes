#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
for_each(iterator beg, iterator end, _func);
// 遍历算法 遍历容器元素
// beg 开始迭代器
// end 结束迭代器
// _func 函数或者函数对象
*/
//普通函数
void print(int v)
{
	cout << v << " ";
}

//仿函数
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	for_each(v.begin(), v.end(), print);//普通函数把函数名放进来
	cout << endl;
	for_each(v.begin(), v.end(), print02());//仿函数将函数对象放进来
	cout << endl;
}

int main()
{
	test01();
	system("color 2");
	system("pause");
	return 0;
}