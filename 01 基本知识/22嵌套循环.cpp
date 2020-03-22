#include<iostream>
using namespace std;

int main()
{

	//打印一行
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "* * * * * * * * * *" << endl;
	//}


	for (int i = 0; i < 10; i++)//打印行数
	{
		for (int j = 0; j < 10; j++)//打印列数
		{
			cout << " *";
		}
		cout << endl;//换行
	}
	
	system("pause");
	return 0;
}
