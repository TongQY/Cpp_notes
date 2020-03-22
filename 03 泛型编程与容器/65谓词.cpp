#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
返回bool类型的仿函数称为谓词
operator接受一个参数，称之为一元谓词
*/

class greaterthan5
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};


void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中有没有大于五的数字
	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterthan5());//greaterthan5()匿名对象
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了:" << *it << endl;
	}
}

int main()
{

	test01();

	system("pause");

	return 0;
}