#include<iostream>
using namespace std;

int main()
{

	//二维数组名称用途
	//1.统计数组在内存中的长度     sizeof(arr)       第一个元素长度sizeof（arr[0]）
	//2.获取数组在内存中的首地址

	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6},
	};

	//1.统计数组在内存中的长度     sizeof(arr)  4*6=24
	cout << "the length of arr is  " << sizeof(arr) << endl;
	//每行多少内存
	cout << "the first line's length of arr is  " << sizeof(arr[0]) << endl;
	//给个元素多少
	cout << "the length of arr[0][0] is " << sizeof(arr[0][0]) << endl;

	//行数
	cout << "the hang is " << sizeof(arr) / sizeof(arr[0]) << endl;
	//列数
	cout << "the lie  is " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	
	
	//数组首地址
	cout << "the location of arr      = " << (int)arr << endl;
	//第一行首地址
	cout << "the location of arr[0]   = " << (int)arr[0]<< endl;
	//第二行首地址
	cout << "the location of arr[1]   = " << (int)arr[1]<< endl;
	//第一个元素首地址
	cout << "the location of arr[0][0]= " << (int)&arr[0][0] << endl;
	cout << "the location of arr[0][1]= " << (int)&arr[0][1] << endl;
	system("pause");

	return 0;
}
