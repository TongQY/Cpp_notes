#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
replace_if(iterator beg, iterator end, _pred, newvalue);
// 按条件替换元素，满足条件的替换成指定元素
// beg 开始迭代器
// end 结束迭代器
// _pred 谓词
// newvalue 替换的新元素
*/

class printt
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class great20
{
public:
	bool operator()(int a)
	{
		return a > 20;
	}
};

void test01()
{
	vector<int>v1;

	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(10);
	v1.push_back(30);

	cout << "改变前：" << endl;
	for_each(v1.begin(), v1.end(), printt());
	cout << endl;

	replace_if(v1.begin(), v1.end(), great20(),66);
	cout << "改变后：" << endl;
	for_each(v1.begin(), v1.end(), printt());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}