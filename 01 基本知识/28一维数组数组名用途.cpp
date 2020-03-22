#include<iostream>
using namespace std;

int main()
{
	//数组名是常量，无法赋值

	//一维数组名称用途
	//1.统计数组在内存中的长度     sizeof(arr)       第一个元素长度sizeof（arr[0]）
	//2.获取数组在内存中的首地址

	int arr[5] = { 1,2,3,4,5 };
	
	//1.统计长度
	cout << "the length of arr is  " <<sizeof(arr) << endl;
	cout << "the length of arr[0] is "<<sizeof(arr[0]) << endl;

	//2.获取地址
	cout << "the location of arr  = " << (int)arr << endl;
	cout << "the location of arr[0]  = " << (int)&arr[0] << endl;
	cout << "the location of arr[1]  = " << (int)&arr[1] << endl;
	
	system("pause");
	
	return 0;
}
