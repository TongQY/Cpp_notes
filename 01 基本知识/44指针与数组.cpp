#include<iostream>
using namespace std;
//利用指针访问数组元素
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int* p = arr;//   arr=p

	cout << "arr = " << arr << endl;
	cout << "  p = " << p << endl;

	//第一个元素
	cout << "arr[0] = " << arr[0] << endl;
	
	//访问第一个元素
	cout << "    *p = " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "a["<<i<<"] = "<< *p << endl;
		p = p + 1;//p是int*类型 p+1 内存地址 加 4
	}

	system("pause");
	return 0;
}
