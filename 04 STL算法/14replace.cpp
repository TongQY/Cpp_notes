#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
replace(iterator beg, iterator end, oldvalue, newvalue);
// 将区间内旧元素 替换成 新元素
// beg 开始迭代器
// end 结束迭代器
// oldvalue 旧元素
// newvalue 新元素
*/
class printt
{
public:
	void operator()(int val)
	{
		cout << val << " ";
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
	
	cout << "替换前：" << endl;
	for_each(v1.begin(), v1.end(), printt());
	cout << endl;

	replace(v1.begin(), v1.end(), 10, 2000);
	cout << "替换后：" << endl;
	for_each(v1.begin(), v1.end(), printt());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}