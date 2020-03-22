#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<ctime>
/*
random_shuffle(iterator beg, iterator end);
// 指定范围内的元素随机调整次序
// beg 开始迭代器
// end 结束迭代器
*/
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{

	//随机数种子
	srand((unsigned int)time(NULL));

	vector<int>v;
	//创建
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), myprint);
	cout << endl;
	//打乱
	random_shuffle(v.begin(), v.end());

	//遍历
	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}