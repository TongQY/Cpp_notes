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
//大小
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//if (m.empty())
	//{
	//	cout << "m为空 " << endl;
	//}
	//else
	//{
	//	cout << "容器不为空 " << endl;
	//	cout << "元素大小为:" << m.size();
	//}		cout << endl;
	map<int, int>m2;
	m2.insert(pair<int, int>(12, 102));
	m2.insert(pair<int, int>(22, 202));
	m2.insert(pair<int, int>(32, 302));
	//交换前
	print(m);
	print(m2);

	cout << endl;
	m.swap(m2);
	print(m);
	print(m2);
}
//交换
int main()
{
	test01();
	system("pause");
	return 0;
}