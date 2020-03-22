#include<iostream>
using namespace std;

/*
* 利用函数模板封装一个排序的函数，可以对**不同数据类型数组**进行排序
* 排序规则从大到小，排序算法为**选择排序**
* 分别利用**char数组**和**int数组**进行测试
*/

template<typename T>
void myswap(T&a,T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void printarr(T c[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout<<c[i];
	}
	cout<<endl;
}

template<typename T>
void mysort(T arr[],int len)
//选择排序
{
	for (int i = 0; i < len;i++)
	{
		int max = i;//认定最大值的坐标
		for (int j = i + 1; j < len; j++)
		{
			//
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			myswap(arr[max], arr[i]);
		}
	}
}

void test01()
{
	char chararr[] = "badcfg";
	int lens = sizeof(chararr) / sizeof(chararr[0]);	
	mysort(chararr, lens);
	printarr(chararr, lens);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
