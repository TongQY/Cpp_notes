#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
/*
front()
back()
不能用[] at访问
*/
void print(const list<int>& l1)
{
	for (list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//反转
	list<int>l1;

	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(20);
	l1.push_back(40);

	print(l1);
	//反转后
	l1.reverse();
	print(l1);
}

bool mycompare(int n1,int n2)
{
	return n1 > n2;
}

//排序
void test02()
{
	list<int>l1;

	l1.push_back(10);
	l1.push_back(30);
	l1.push_back(20);
	l1.push_back(40);
	//排序前
	print(l1);

	//sort(l1.begin(), l1.end());
	//print(l1);报错

	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//不支持随机访问迭代器的容器，内部会提供对应算法
	
	l1.sort();//这是调用的成员函数，默认升序
	print(l1);

	//l1.reverse();
	//print(l1);
	//l1.reverse();
	//print(l1);
	l1.sort(mycompare);
	print(l1);
	l1.reverse();
	print(l1);
}

int main()
{
	test02();
	system("pause");
	return 0;
}
