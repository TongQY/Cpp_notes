#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
reverse(iterator beg, iterator end);
// 反转指定范围的元素
// beg 开始迭代器
// end 结束迭代器
*/
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	//创建
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	random_shuffle(v1.begin(), v1.end());

	cout << "反转前：" << endl;
	for_each(v1.begin(), v1.end(), myprint);
	cout << endl;
	reverse(v1.begin(), v1.end());
	cout << "反转后：" << endl;
	for_each(v1.begin(), v1.end(), myprint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}