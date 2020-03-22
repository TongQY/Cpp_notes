#include<iostream>
using namespace std;
#include<vector>
/*
减少vector在动态扩展的扩展次数
reserve(int len );容器预留len个元素长度，预留位置不初始化，元素不可访问
*/

void test01()
{
	//利用reserve自主预留空间
	vector<int>v;
	v.reserve(100000);

	int num = 0;//测试统计开辟次数
	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0])
		{
			p = &v[0];
			num++;//测量首地址变换次数
		}
	}
	cout << "num= " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}