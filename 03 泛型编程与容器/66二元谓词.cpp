#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
返回bool类型的仿函数称为谓词
operator接受一个参数，称之为一元谓词
*/

class compare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(11);
	v.push_back(22);
	v.push_back(44);
	v.push_back(33);
	v.push_back(55);

	sort(v.begin(), v.end());
	
	for (vector<int>::iterator it = v.begin(); it !=  v.end();it++)
	{
		cout << *it<<"  ";
	}
	cout << endl;

	//变为排序从大到小
	sort(v.begin(), v.end(), compare());
	cout << "--------------------------" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}