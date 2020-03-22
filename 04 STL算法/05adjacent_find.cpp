#include<iostream>
using namespace std;
#include<algorithm>

#include<vector>
/*
adjacent_find(iterator beg, iterator end);
// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
// beg 开始迭代器
// end 结束迭代器
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
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3); //返回这个地址，相邻相同第一个元素
	v.push_back(3);

	vector<int>::iterator it= adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了：" <<*it << endl;
	}
}

//2.查找自定义数据类型
class person
{
public:
	person(string name, int a)
	{
		this->name = name;
		this->age = a;
	}

	string name;
	int age;
};

class great234
{
public:
	bool operator()(const person& p)
	{
		return p.age>20;
	}
};

//查找自定义数据类型
void test02()
{
	vector<person>v;
	//创建
	person p1("aa", 10);
	person p2("bb", 20);
	person p3("cc", 30);
	person p4("dd", 40);

	//放入容器
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//查找年龄大于二十的
	vector<person>::iterator it  = find_if(v.begin(), v.end(), great234());
	if (it==v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了：" << it->name <<"浮生只为卿  "<<it->age<< endl;
	}
}

int main()
{
	test01();
	cout << "Heloise" << endl;
	system("color 2");
	system("pause");
	return 0;
}