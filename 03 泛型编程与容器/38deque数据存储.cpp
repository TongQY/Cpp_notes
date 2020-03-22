#include<iostream>
using namespace std;
#include<deque>
/*
1.通过迭代器访问
2.通过[]
3.通过at()
*/
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	//通过[]访问
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i]<<" " ;
	}
	cout<<endl;
	
	//通过at方式访问元素
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;
	cout << "第一个元素为：" <<d.front()<< endl;
	cout << "最后一个元素为：" << d.back() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}