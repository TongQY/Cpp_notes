#include<iostream>
using namespace std;
#include<vector>

void print(vector<int>v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	print(v1);

	//赋值 operator
	vector<int>v2 = v1;
	print(v2);

	//assain
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	print(v3);

	//elem
	vector<int>v4;
	v4.assign(10, 100);
	print(v4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}