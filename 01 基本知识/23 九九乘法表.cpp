#include<iostream>
using namespace std;

int main()
{
	//列数乘以行数
	//打印行数
	for (int j = 1; j < 10; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << i << "*" << j << "=" << i * j<<"\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
