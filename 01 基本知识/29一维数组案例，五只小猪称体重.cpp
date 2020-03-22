#include<iostream>
using namespace std;

int main()
{
	//数组中记录了五只小猪的体重，如；Int arr[5]={100，120，130，150，160}；
	//找出并打印最重的小猪体重
	int arr[5] = { 170,120,100,150,160 };

	//访问数组中的每个元素，如果这个元素比认定的大，更新最大值

	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		//访问的数组中的元素比我认定的大，交换
		if (arr[i] > max)
		{
			max = arr[i];
		}
		
	}
	cout << "max = " << max << endl;
	system("pause");
	return 0;
}
