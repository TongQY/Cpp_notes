/*
实现一个通用的数组类
对自定义的数据类型 内置类型存储
真实数据放到堆区
构造函数传入数组容量
提供对应的拷贝构造和operator= 解决浅拷贝
尾插法和尾删法对数组数据增加和删除
下标访问
获取数组容量和元素个数
*/

#include<string>
#include<iostream>
using namespace std;

//#include"15myarray.hpp"
template<class T>
class myarray
{
public:
	//有参构造 创建数组容量
	myarray(int capacity)
	{
		this->m_capacity = capacity;
		this->m_size = 0;//元素个数初始化
		this->paddress = new T[this->m_capacity];
		cout << "myarray 有参构造" << endl;
	}
	
	//拷贝构造
	myarray(const myarray& arr)
	{
		this->m_capacity = arr.m_capacity;//栈区
		this->m_size = arr.m_size;//栈区
		//this->paddress = arr.paddress;指针不能直接赋值，浅拷贝问题导致堆区的问题重复释放
		cout << "myarray 拷贝构造" << endl;
		
		//深拷贝
		this->paddress = new T[arr.m_capacity];

		//将arr中的数据拷贝过来
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	//operator= 防止浅拷贝
	myarray& operator=(const myarray& arr)
	{
		cout << "myarray 深拷贝" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
			this->paddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		//深拷贝
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	//尾插法
	void push_back(const T& val)
	{
		//判断容量是否等于大小
		if (this->m_capacity == this->m_size)
		{
			cout << "容量已满" << endl;
			return;

		}
		this->paddress[this->m_size] = val;//在数组末尾插入数据
		this->m_size++;

	}
	//尾删法
	void Pop_Back()
	{
		//用户访问不到
		if (this->m_size == 0)
		{
			cout<<"数据为空!"<<endl;
			return;
		}
		this->m_size--;
	}
	//用户可以通过下标方式访问                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	//重载中括号
	T& operator[](int index)
	{
		return this->paddress[index];
	}
	//返回数组容量
	int getcapacity()
	{
		return this->m_capacity;
	}
	//返回数组大小
	int getsize()
	{
		return this->m_size;
	}
	//析构函数
	~myarray()
	{
		cout << "myarray 析构" << endl;
		if (this->paddress!= NULL)
		{
			delete [] this->paddress;//数组名this->paddress
			this->paddress = NULL;

		}
	}
	
private:
	T* paddress;//指针指向堆区开辟的真实数组

	int m_capacity;//数组容量

	int m_size;
};

//打印数组
void printintarr(myarray <int>arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << endl;
	}
}

//测试系统内置类型
void test01()
{
	myarray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//利用尾插法插入
		arr1.push_back(i);
	}
	cout << "array的打印输出为" << endl;
	printintarr(arr1);
	cout << "arr的容量" << arr1.getcapacity() << endl;
	cout << "arr的大小" << arr1.getsize () << endl;
	myarray<int>arr2(arr1);
	cout << "array2的打印输出为" << endl;
	printintarr(arr2);
	//尾删
	arr2.Pop_Back();
	arr2.Pop_Back();
	cout << "arr的容量" << arr2.getcapacity() << endl;
	cout << "arr的大小" << arr2.getsize() << endl;

}

//定义person类
class person
{
public:
	person() {};
	person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	string m_name;
	int m_age;
};

//创建person数组
void personarray(myarray<person>&arr)
{
	for (int i = 0; i < arr.getsize();i++)
	{
		cout << "姓名:" << arr[i].m_name <<"   \t年龄:" << arr[i].m_age << endl;
	}
}
//测试person数组
void test02()
{
	myarray<person>arr(10);
	person p1("曹操", 19);
	person p2("刘备", 20);
	person p3("孙权",21);
	person p4("周瑜", 22);
	//将数据插入数组中
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	
	//打印输出
	personarray(arr);
	cout << "arr的容量" << arr.getcapacity() << endl;
	cout << "arr的大小" << arr.getsize() << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}