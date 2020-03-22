#include<iostream>
using namespace std;
#include<vector>
/*
vector数据结构与数组相似，成为单端数组
*/
void printvector(vector<int>v1)
{
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;//默认构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//通过区间方式构造
	vector<int>v2(v1.begin(), v1.end()-1);
	printvector(v2);

	//n个elem构造
	vector<int>v3(10, 100);
	printvector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printvector(v3);
}

int main()
{
	test01();
	system("pause");
	return 0;
}