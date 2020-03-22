
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

	s1.erase(s1.begin());

	print(s1);

	//删除重载版本
	s1.erase(30);
	print(s1);

	//清空
	s1.erase(s1.begin(), s1.end());
	print(s1);
	s1.clear();
	print(s1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}