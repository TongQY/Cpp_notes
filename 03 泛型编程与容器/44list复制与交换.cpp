#include<iostream>
using namespace std;
#include<list>

void print(const list<int>& l1)
{
	for (list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//赋值
void test01()
{
	list<int>l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	print(l1);

	list<int>l2;
	l2 = l1;
	//operator赋值
	print(l2);
	list<int>l3;
	l3.assign(l2.begin(), l2.end());
	print(l3);
	list<int>l4;
	l4.assign(10,100);
	print(l4);

}
//交换 
void test02()
{
	list<int>l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	list<int>l2;
	l2.assign(10, 100);
	cout<<"交换前："<<endl;
	print(l1);
	print(l2);
	cout << "交换后：" << endl;

	l1.swap(l2);
	print(l1);
	print(l2);
}

int main()
{
	test02();
	system("pause");
	return 0;
}