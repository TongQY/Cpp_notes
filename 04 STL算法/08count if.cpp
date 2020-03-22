#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
count_if(iterator beg, iterator end, _Pred);
// 按条件统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// _Pred 谓词
*/

class five
{
public:
	bool operator()(const int p)
	{
		return p > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(5);
	//查找容器是否有5
	int num = count_if(v.begin(), v.end(),five());

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
	
	string name;
	int age;
};

//谓词
class fivee
{
public:
	bool operator()(const person& p)
	{
		if (p.age>5)
		{
			return true;
			//return p.age>5
		}
	}
};


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
	int num= count_if(v.begin(), v.end(),fivee());

	cout << "找到了：" <<num<< endl;

}

int main()
{
	test02();
	system("pause");
	return 0;
}