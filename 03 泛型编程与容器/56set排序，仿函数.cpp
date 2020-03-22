#include<iostream>
using namespace std;
#include<set>

class compare//仿函数对象
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test01()
{
	set<int,compare>s1;
	//插入前，指定排序规则否则无法插入

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	
	for (set<int, compare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << "  \t";
	}cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}