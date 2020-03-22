#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
函数原型：
sort(iterator beg, iterator end, _Pred);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// _Pred 谓词
*/
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	//创建
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);
	//利用sort排序
	sort(v.begin(), v.end());
	
	for_each(v.begin(), v.end(),myprint);
	cout << "-----------" << endl;
	//改变为降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myprint);
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}