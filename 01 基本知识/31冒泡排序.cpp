#include<iostream>
using namespace std;

int main()
{
	//冒泡排序
	//4 2 8 0 5 7 1 3 9
	//9个数 八对相邻
	//第一轮，找第一个最大数
	//第二轮，找第二个最大数

	//排序前
	int arr[9] = {4,2,8,0,5,7,1,3,9};
	cout << "before change:" << endl;
	for (int i = 0; i <9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//排序
	//排序总轮数 = 元素个数-1
	//每次对比次数 = 元素个数 - 排序轮数 - 1

	//九个数。第一轮 比较八次，找到最大的 i=0，第一轮 八次
	//八个数。第二轮 比较七次，找到次最大 i=1，第二轮 七次

	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环
		for (int j=0;j<9-i-1;j++)
		{
			//若第一个数大于第二个，交换
			if (arr[j] > arr[j + 1])
			{
				int temp = 0 ;
				temp     = arr[j+1];
				arr[j+1] = arr[j];
				arr[j]   = temp;
			}
		}
	}

	//排序后结果
	cout << "after change:" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
