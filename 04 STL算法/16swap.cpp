#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
swap(container c1, container c2);
// 互换两个容器的元素
// c1容器1
// c2容器2
*/
void test01()
{

	vector<int>v1;

	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(10);
	v1.push_back(30);

	vector<int>v2;

	v2.push_back(120);
	v2.push_back(320);
	v2.push_back(120);
	v2.push_back(220);
	v2.push_back(120);
	v2.push_back(320);

	cout << "改变前：" << endl;
	for_each(v1.begin(), v1.end(), printt());
	cout << endl;
	for_each(v2.begin(), v2.end(), printt());
	cout << endl;

	swap(v1, v2);

	cout << "改变后：" << endl;
	for_each(v1.begin(), v1.end(), printt());
	cout << endl;
	for_each(v2.begin(), v2.end(), printt());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
