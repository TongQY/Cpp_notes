#include<iostream>
using namespace std;
#include<numeric>
#include<vector>

/*
accumulate(iterator beg, iterator end, value);
// 计算容器元素累计总和
// beg 开始迭代器
// end 结束迭代器
// value 起始值
*/
void test01()
{
	vector<int>v1;
	for (int i = 0; i <= 100;i++)
	{
		v1.push_back(i);
	}

	int num = accumulate(v1.begin(), v1.end(),521);
	cout <<num<< endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}