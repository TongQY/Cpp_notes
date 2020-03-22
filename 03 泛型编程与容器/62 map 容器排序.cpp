#include<iostream>
using namespace std;
#include<map>
/*
仿函数
*/
class compare
{
public:
	bool operator()(int v1, int v2)const
	{
		//降序
		return v1>v2;
	}
};
void print(map<int, int,compare>& m)
{
	for (map<int, int,compare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "\tvalue:" << it->second << " "; cout << endl;
	}
}

void test01()
{
	map<int, int,compare>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	print(m);
}

int main()
{
	test01();
	system("pause");
	return 0;
}