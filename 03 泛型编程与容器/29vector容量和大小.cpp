#include<iostream>
using namespace std;
#include<vector>
/*
对vector容器的容量和大小操作
*/
void print(vector<int>v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout <<endl;
}

void test01()
{
	vector<int>v1;
	for(int i =0;i<10;i++)
	{
		v1.push_back(i);
	}

	print(v1);

	if (v1.empty())//判断是否为空 为真，容器为空
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "不为空" << endl;
		cout << "容器容量为：" <<v1.capacity() <<endl;
		cout << "v1大小为(实际个数)：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15,100);//重新指定比原来长，默认用零填充,可以指定默认填充值
	print(v1);

	v1.resize(5);//超出部分将会删除
	print(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}