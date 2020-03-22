#include<iostream>
using namespace std;
/*
	两种分类方式

	按参数分为  有参构造 无参构造(默认构造)
	按类型分为  普通构造 拷贝构造
	
	三种调用方式
	括号法
	显示法
	隐式转换法
*/

class person
{
public:
	//普通构造函数

	//无参
	person()
	{
		cout << "无参构造" << endl;
	}
	//有参
	person(int a)
	{
		age = a;
		cout << "有参构造" << endl;
	}

	//拷贝构造函数
	person(const person &p)//p是模板，拷贝构造是再复制一份，但模板不能改所以const
	{
		//将传入的模板的属性拷贝到这个新的身上
		age=p.age ;
		cout << "拷贝构造" << endl;
	}
	//析构
	~person()
	{
		cout << "析构" << endl;
	}
//private:
	int age;
};

//调用
void test01()
{

	//person p1;默认构造的调用
	//person p2(18);

	//括号法调用拷贝构造
	//person p3(p2);

	//注意事项1
	//调用默认构造函数时，不要加（）
	//因为下面这行代码编译器会认为是一个函数的声明
	//person p1();返回类型为person类型的函数

	//2.显示法
	person p1;//无参构造
	person p2 = person(10);//有参构造
	person p3 = person(p2);//拷贝构造

	
	//person(10);//匿名对象，没有名字的对象
	//相当于 p2 = person(10)
	//这行执行结束后，系统会立即回收匿名对象
	
	//注意事项2
	//不要利用拷贝构造初始化匿名对象
	//person(p3);
	//编译器认为person(p3)==person p3;

	//3.隐式转换
	person p4 = 10;//有参构造
	//相当于写了 person p4 = person(10)  即p4 = person(10)
	person p5 = p4;//拷贝构造
	//相当于     person p5 = person(p4)  即p5 = person(p4)
}

int main()
{
	test01();
	system("pause");
	return 0;
}
