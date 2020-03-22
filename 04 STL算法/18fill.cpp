#include<iostream>
using namespace std;
#include<algorithm>
#include<numeric>
#include<vector>
/*
fill(iterator beg, iterator end, value);
// 向容器中填充元素
// beg 开始迭代器
// end 结束迭代器
// value 填充的值
*/

void print(int v)
{
	cout << v << " ";
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i <= 10;i++)
	{
		v1.push_back(i);
	}
	//重新填充
	fill(v1.begin()+5, v1.end(), 521);
	for_each(v1.begin(), v1.end(), print);
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}