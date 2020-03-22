#include<iostream>
using namespace std;
#include<list>
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
	list<int>l1;
	
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	
	cout << "第一个元素：" <<l1.front()<< endl;
		
	cout << "最后一个元素：" << l1.back() << endl;

	//迭代器不支持随机访问
	list<int>::iterator it = l1.begin();

	it--;//支持双向
	it++;
	//it = it + 1;编译器默认认为是跳跃式访问不支持随机访问
}

int main()
{
	test01();
	system("pause");

	return 0;
}