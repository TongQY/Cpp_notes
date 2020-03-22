#include<iostream>
using namespace std;
#include<algorithm>
#include<numeric>
#include<functional>
#include<vector>
/*
set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// 求两个集合的差集
// 注意:两个集合必须是有序序列
// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 //
dest 目标容器开始迭代器
*/

void print(int v)
{
	cout <<v <<" ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>g;
	//目标容器需要提前开辟

	//差集目标容器
	g.resize(max(v1.size(),v2.size()));
	cout << "v1 v2差集" << endl;
	//set_intersection返回迭代器
	vector<int>::iterator itend =set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), g.begin());
	for_each(g.begin(), itend, print);
	cout << endl;
	cout << endl;
	cout << "v2 v1差集" << endl;
	itend = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), g.begin());
	
	for_each(g.begin(), itend, print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}