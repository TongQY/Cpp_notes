#include<iostream>
using namespace std;
#include<algorithm>
#include<numeric>
#include<functional>
#include<vector>
/*
set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// 求两个集合的并集
// 注意:两个集合必须是有序序列
// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 //
dest 目标容器开始迭代器*/
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

	//最大
	g.resize((v1.size()+v2.size()));

	//set_intersection返回迭代器
	vector<int>::iterator itend =set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), g.begin());

	//for_each(g.begin(), //最后点变化g.end(), print);

	cout << endl;

	for_each(g.begin(), g.end(), print);//将交集最后一个迭代器返回
	cout << endl;
	for_each(g.begin(), itend, print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}