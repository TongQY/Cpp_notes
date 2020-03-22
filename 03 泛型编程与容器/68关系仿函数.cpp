#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
//内建函数对象 关系仿函数
class copm
{
public:
	bool operator()(int v1, int v2)
	{
		return v1>v2;
	}
};

void test01()
{
	vector<int >v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<< " " ;
	}cout << endl;

	//降序
	cout << "*****************" << endl;
	//自己写的
	//sort(v.begin(), v.end(), copm());
	//编译器提供
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}