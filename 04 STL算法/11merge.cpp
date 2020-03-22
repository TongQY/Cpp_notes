#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// 容器元素合并，并存储到另一容器中
// 注意: 两个容器必须是有序的
// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 //
dest 目标容器开始迭代器
*/
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	
	//创建
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+1000);
	}
	vector<int>v3;
	//提前分配空间
	v3.resize(v1.size()+v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());	
	for_each(v3.begin(), v3.end(), myprint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}