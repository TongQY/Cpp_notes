#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<string>

/*
find(iterator beg, iterator end, value);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素
*/
//查找自定义数据类型
class person
{
public:
	person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	//需要重载== 否则find不知如何对比

	bool operator==(const person &p)
	{
		if (this->m_age = p.m_age)
		{
			return true;
		}
	}
	string m_name;
	int m_age;
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器是否有5
	vector<int>::iterator it= find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了：" << *it << endl;
	}
}

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
	
	//查找
	vector<person>::iterator it  = find(v.begin(), v.end(), p2);
	if (it==v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了：" << it->m_name <<" :"<<it->m_age<< endl;
	}
}

int main()
{
	test02();
	cout << "Heloise" << endl;
	system("pause");
	return 0;
}