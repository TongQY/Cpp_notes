/*
所有元素插入时自动排序，
set/multiset属于关联式容器，二叉树实现
set中不允许有重复元素multiset允许
*/
#include<iostream>
using namespace std;
#include<set>

void print(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it<<"  ";
	}cout << endl;
}

void test01()
{
	set<int>s1;
	//只有insert插入方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	print(s1);
	//10  20  30  40
	//不允许有重复值

	//拷贝构造
	set<int>s2(s1);
	print(s2);

	set<int>s3;
	s3 = s2;
	print(s3);
}

int main()
{
	test01();
	system("pause");
	return 0;
}