/*
统计set大小，交换set容器
*/
#include<iostream>
using namespace std;
#include<set>

void print(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it<<"  \t";
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

	if (s1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空"<<endl;
		cout << "容器大小为：" << s1.size() << endl;
	}

	set<int>s2;
	//只有insert插入方式
	s2.insert(100);
	s2.insert(800);
	s2.insert(300);
	s2.insert(400);
	cout << "交换前：" << endl;
	print(s1);
	print(s2);
	s1.swap(s2);
	cout << "交换后：" << endl;
	print(s1);
	print(s2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}