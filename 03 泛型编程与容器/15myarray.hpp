/*
#pragma once
//自己的通用数组类
#include<iostream>
using namespace std;

template<class T>
class myarray
{
public:
	//有参构造 参数容量
	myarray(int capacity)
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		this->paddress = new T[this->m_capacity];
		cout << "myarray youcan" << endl;
	}
	
	//拷贝构造
	myarray(const myarray& arr)
	{
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//this->paddress = arr.paddress;指针不能直接复制，浅拷贝问题导致堆区的问题重复释放
		cout << "myarray copy" << endl;
		
		//深拷贝
		this->paddress = new T[arr.m_capacity];

		//将arr中的数据拷贝过来
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}
	//operator防止浅拷贝
	//operator= 防止浅拷贝
	myarray& operator=(const myarray& arr)
	{
		cout << "myarray operator" << endl;
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
			cout << "manle" << endl;
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
		cout << "myarray xigou" << endl;
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
};*/