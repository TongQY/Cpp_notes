#include<iostream>
using namespace std;
#include<deque>
/*
双端数组，可对头端进行插入和删除操作
deque与vector区别：
vector对头部（第一个元素）的插入删除效率低，数据量越大，效率越低
deque相对而言，对头部的插入删除速度比vector快
vector访问元素时，速度会比deque快，这和两者内部实现有关
*/

//deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
//中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的存储空间
//deque容器的迭代器也是支持随机访问的

//deque的构造函数
void print(const deque<int>&d)//遍历时防止修改容器
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//容器中的数据不可修改
		cout << *it << " ";	
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	print(d1);

	//区间赋值
	deque<int>d2(d1.begin(), d1.end());
	print(d2);

	deque<int>d3(10, 100);
	print(d3);

	//拷贝构造
	deque<int>d4(d3);
	print(d4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}