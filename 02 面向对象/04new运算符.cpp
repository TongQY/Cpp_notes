#include<iostream>
using namespace std;

//new 用delete删除
//new 数据类型 返回该数据对应类型的指针

//1.new的基本用法
int* func()
{
	//创建堆区数据
	//返回该数据对应类型的指针
	int* p = new int(10);
	return p;
}

//2.在堆区开辟一个数组
void test02()
{
	//创建10整形数据的数组，在堆区
	int *arr = new int[10];//10代表十个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给十个数赋值100-109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;//给十个数赋值100-109
	}
	delete[] arr;//释放堆空间
}


int main()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区数据由程序员释放
	delete p;//delete的是func()中new的空间

	test02();
	
	system("pause");
	return 0;
}
