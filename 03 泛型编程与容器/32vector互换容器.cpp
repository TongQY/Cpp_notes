#include<iostream>
using namespace std;
#include<vector>
/*
实现两个元素互换操作
*/
//函数原型 swap(vec);//将vec与调用者本身的元素进行互换
//1.基本使用

void print(vector<int>v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	cout << "交换前：" << endl;
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	print(v1);

	vector<int>v2;
	for (int i = 10; i>0; i--)
	{
		v2.push_back(i);
	}
	print(v2);

	cout << "交换后:" << endl;
	v1.swap(v2);
	print(v1);
	print(v2);
}

//2.实际用途
//可以收缩内存空间
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);//重新指定大小
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" <<v.size()<< endl;

	//用swap收缩
	vector<int>(v).swap(v);//
	//vector<int> //(v) 匿名对象，当前行代码执行完，系统进行回收，（v）不会占用空间
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}