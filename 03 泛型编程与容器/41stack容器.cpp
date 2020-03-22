#include<iostream>
using namespace std;
#include<stack>
/*
stack 先进后出的数据结构，只有一个出口

栈中只有顶端的元素才能被外界使用，因此栈不允许有遍历行为
可判断是否为空 empty
可返回元素个数 size（元素进栈时，记录）
*/

void test01()
{
	//先进后出数据结构
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//只要栈不为空，查看栈顶，出栈
	cout << "栈的大小：" <<s.size()<< endl;
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素：" << s.top() << endl;
		//出栈
		s.pop();
	}
	cout << "栈的大小：" << s.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}