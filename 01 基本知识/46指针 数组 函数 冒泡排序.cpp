#include<iostream>
using namespace std;

//案例描述 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//例如 int arr[10]={4,3,6,9,1,2,10,8,7,5}

//实现排序
void bubblesort(int* arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			int max = 0;
			if (arr[j] > arr[j + 1])
			{
				max = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = max;
			}
		}
	}
}

//打印数组
void printArray(int* arr, int len)
{
	//数组传参数时(int* arr, int len)或者(int arr[], int len)
	for (int i = 0; i < len; i++)
	{

		cout << "arr[" << i << "]=" << arr[i];
		cout << endl;
	}
}

int main()
{
	//1.创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//2.创建函数实现冒泡排序
	int len = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, len);

	//3.打印排序后的数组
	printArray(arr,len);
	system("pause");

	return 0;
}
