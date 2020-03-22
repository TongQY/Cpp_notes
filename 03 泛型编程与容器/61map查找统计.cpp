#include<iostream>
using namespace std;
#include<map>

void print(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "\tvalue:" << it->second << " "; cout << endl;
	}
}

void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	
	map<int,int>::iterator pos =m.find(3);
	if (pos != m.end())
	{
		cout << "元素 key:" << (*pos).first << "\tvalue :" << pos->second;
	}
	cout << endl;

	int num = m.count(3);
	cout <<"num = "<< num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
