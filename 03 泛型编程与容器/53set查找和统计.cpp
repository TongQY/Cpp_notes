#include<iostream>
using namespace std;
#include<set>

void print(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  \t";
	}cout << endl;
}

void test01()
{
	set<int>s1;
	//只有insert插入方式
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	print(s1);

	//查找
	set<int>::iterator pos;
	pos=s1.find(300);

	if (pos != s1.end())
	{
		cout << "找到 " << *pos << endl;
	}
	else
	{
		cout << "没找到 " << endl;
	}
}

//统计
void test02()
{
	set<int>s1;
	//只有insert插入方式
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	//统计个数
	//对于set统计结果 0||1
	int num = s1.count(300);
	cout <<"num= "<< num << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}
