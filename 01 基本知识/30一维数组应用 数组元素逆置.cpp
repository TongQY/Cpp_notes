#include<iostream>
using namespace std;

int main()
{
	//1 3 2 5 4      4 5 2 3 1
	//		int start = 0 ; 起始元素下标
	//		int end   = sizeof(arr)/sizeof(arr[0])-1 ;  末尾元素下标
	//		1.创建起始下标，末尾下表
	//		2.起始下标和末尾下标互换
	//		3.起始下标+1，末尾-1
	//		4.当start<end 执行互换

	//1.创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "before change:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<" ";
	}
	cout<< endl;

	//2.实现逆置
	//2.1记录起始下标位置
	//2.2记录结束下标位置
	//2.3起始下标位置与结束下标元素互换
	//2.4起始位置++，结束位置--
	//2.5循环执行2.1，直到，起始位置>结束位置
	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(arr[0])-1;//结束下标

	while (start < end)
	{
		//实现元素互换
		int temp   = arr[start];
		arr[start] = arr[end];
		arr[end]   = temp;

		//下标更新
		start++;
		end--;
	}
	
	//3.打印逆置后的数组
	cout << "after change:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
