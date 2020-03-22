#include<iostream>
using namespace std;
#include<vector>

void print(vector<int>v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " \t";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	print(v1);
	
	//尾删
	v1.pop_back();//删除最后一个元素
	print(v1);

	//插入
	v1.insert(v1.begin(), 100);//第一个参数返回的是迭代器，指向容器中的元素
	print(v1);

	//插入重载
	v1.insert(v1.begin(),2, 100);//在第一个位置插入两个100
	print(v1);

	//删除
	v1.erase(v1.begin());//删除第一个元素
	print(v1);

	//删除区间	
	v1.erase(v1.begin(), v1.end()-1);//相当于clear()
	print(v1);

	//清空
	v1.clear();
	print(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}