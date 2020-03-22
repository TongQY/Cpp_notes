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
	pair<set<int>::iterator,bool>ret =s1.insert(30);

	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	pair<set<int>::iterator, bool>ret2 = s1.insert(10);
	if (ret2.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	pair<set<int>::iterator, bool>ret3 = s1.insert(10);
	if (ret3.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	s1.insert(20);
	s1.insert(40);
	print(s1);

	multiset<int>m1;
	m1.insert(10);
	m1.insert(10);
	m1.insert(20);
	m1.insert(10);
	for (multiset<int>::iterator it = m1.begin();it!=m1.end();it++)
	{
		cout << *it << " \t";
	}
	cout << endl;	
}

int main()
{
	test01();
	system("pause");
	return 0;
}