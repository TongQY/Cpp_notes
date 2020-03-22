#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
count(iterator beg, iterator end, value);
// 统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// value 统计的元素
*/
//统计内置
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(5);
	//查找容器是否有5
	int num = count(v.begin(), v.end(),5);
	
	cout << "个数：" << num << endl;
}

//统计自定义数据类型
class person
{
public:
	person(string name, int a)
	{
		this->name = name;
		this->age = a;
	}
	bool operator==(const person& p)
	{
		if (this->age == p.age)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	string name;
	int age;
};
//查找自定义数据类型
void test02()
{
	vector<person>v;
	//创建
	person p1("aa", 10);
	person p2("bb", 40);
	person p3("cc", 30);
	person p4("dd", 40);
	
	//放入容器
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	person p("dd", 40);
	//查找年龄大于二十的
	int num= count(v.begin(), v.end(),p);

	cout << "找到了：" <<num<< endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}