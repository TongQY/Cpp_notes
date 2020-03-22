#include<iostream>
using namespace std;

int main()
{
	//四种定义方式

	//第一种
	int arr[2][3];//两行三列
	//  arr[0][0]	arr[0][1]	arr[0][2]
	//	arr[1][0]	arr[1][1]	arr[1][2]

	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	//外层循环打印行数，内层循环打印列数
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cout << " arr" << "[" << i << "]" << "[" << j << "]" << " =" << arr[i][j];
		}
		cout << endl;
	}

	//第二种
	int arr1[2][3] =
	{
		{1,2,3},
		{4,5,6},
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cout << " arr" << "[" << i << "]" << "[" << j << "]" << " =" << arr[i][j];
		}
		cout<<endl;
	}

	//第三种

	int arr2[2][3] = { 1,2,3,4,5,6 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cout << " arr" << "[" << i << "]" << "[" << j << "]" << " =" << arr[i][j];
		}
		cout << endl;
	}

	//第四种

	int arr3[][3] = { 1,2,3,4,5,6 };

	system("pause");

	return 0;
}
