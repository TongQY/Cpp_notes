#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<string>

/*find_if(iterator beg, iterator end, _Pred);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// _Pred 函数或者谓词（返回bool类型的仿函数）
*/

class greaterr//谓词
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

	//查找容器是否有5
	vector<int>::iterator it= find_if(v.begin(), v.end(),greaterr());
	if (it == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了：" << *it << endl;
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
	test02();
	cout << "Heloise" << endl;
	//system("color 7");
	system("pause");
	return 0;
}
*/