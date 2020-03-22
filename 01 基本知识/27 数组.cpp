#include<iostream>
using namespace std;

int main()
{
	//第一种	数据类型	数组名[数组长度];
	int arr[5];
	arr[0] = 00;
	arr[1] = 10;
	arr[2] = 20;
	arr[3] = 30;
	arr[4] = 40;

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}


	//第二种 数据类型	数组名[数组长度]={值1，值2，。。}；
	int arr1[5] = {1,2,3,4,5};

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//3.数据类型	数组名[		]={值1，值2，。。};
	int arr2[] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}
