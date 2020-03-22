#include<iostream>
using namespace std;
#include<map>
/*
map所有元素都是pair 
pair中第一个元素为key（键值），起索引作用，第二个元素为value（实值）
插入完成后所有元素根据键值排序

本质，map属于关联式容器，底层结构是二叉树

优点：
可根据key的值找到，value的值
multimap允许容器中有重复的key值
*/

void print(map<int, int>& m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "\tvalue:" << it->second << " "; cout << endl;
	}	
}

void test01()
{
	map<int, int>m1;

	//默认构造，匿名
	m1.insert(pair<int, int>(10, 120));
//	m1.insert(1, 100);
	m1.insert(pair<int, int>(11, 100));
	m1.insert(pair<int, int>(15, 1111));
	m1.insert(pair<int, int>(13, 1885));

	print(m1);

	//拷贝构造
	map<int, int>m2(m1);
	print(m2);

	//赋值
	map<int, int>m3;
	m3 = m2;
	print(m3);
}
int main()
{
	test01();
	system("pause");
	return 0;
}