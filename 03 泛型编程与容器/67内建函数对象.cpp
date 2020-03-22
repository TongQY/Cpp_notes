#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
/*
stl内置了一些函数对象
算数仿函数
关系仿函数
逻辑仿函数
需要引用头文件#functional
*/
//取反  一元仿函数

void test01()
{
	negate<int >n;

	cout << n(50) << endl;
}

//plus 二元仿函数
void test02()
{
	plus<int>p;
	cout<<p(10, 50)<<endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}