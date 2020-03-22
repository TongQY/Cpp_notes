#include<iostream>
using namespace std;

//const修饰其后面的内容
//修饰指针 常量指针            const int * p = & a
//指针指向地址可改，指向的地址的数值不可改

//修饰常量 指针常量            int * const  p = & a 
//指针指向地址不可改，指向的地址的数值可以改 

//const既修饰指针，又修饰常量  const int * const p = & a
//指针指向的地址和值都不可改
int main()
{
	//1.const修饰指针  常量指针
	int a = 10;
	int b = 10;

	const int* p = &a;//等价于int const *p = &a;

	//地址可改
	//*p = 20; error
	// p = &b; right可以将一个常量的地址赋给p；

	//2.const修饰常量  指针常量
	//值可改
	//*p = 20; right
	// p = &b; error

	//3.const修饰指针和常量
	//都不可改

	//*p = 20; error
	// p = &b; error

	system("pause");

	return 0;
}
