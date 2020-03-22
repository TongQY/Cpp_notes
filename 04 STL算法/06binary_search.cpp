#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
查找元素是否存在，返回true 或false
无序序列不可用,只能在有序的序列中使用
查找方式极快
*/
//谓词
class greaterr
{
public:
	//重载 = = find 如何对比
	bool operator()(int p)
	{
		return p>5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//容器必须有序
	//v.push_back(2);无序序列如果再进行查找结果未知
	//查找容器是否有5
	bool ret = binary_search(v.begin(), v.end(),9);
	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没找到" << ret << endl;
	}
}

int main()
{
	test01();
	cout << "Heloise" << endl;
	//system("color 7");
	system("pause");
	return 0;
}