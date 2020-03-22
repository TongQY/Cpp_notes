#include<iostream>
using namespace std;
#include<map>

void print(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "\tvalue:" << it->second << " "; cout << endl;
	}
	cout << endl;
}

//大小
void test01()
{
	//插入
	map<int, int>m;
	//第一种
	m.insert(pair<int, int>(1, 10));
	//第二种
	m.insert(make_pair(32, 302));
	//第三种
	m.insert(map<int, int>::value_type(3, 30));
	//第四种
	m[4] = 40;
	//m[n] 如果

	print(m);
	//删除
	m.erase(m.begin());
	print(m);

	//只会按照key删除，而不会按照值删除
	m.erase(3);
	print(m);

	//区间
	m.erase(m.begin(), m.end());
	print(m);
}
//交换
int main()
{
	test01();
	system("pause");
	return 0;
}