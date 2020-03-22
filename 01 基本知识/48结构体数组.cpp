#include<iostream>
using namespace std;
#include<string>
//作用 将自定义的结构体放入数组便于维护
//语法 struct 结构体名 数组名[元素个数]={	{}	{}	{}	{}	}

//1.定义结构体
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
	//2.创建结构体数组
	struct Student stuarr[3] =
	{
		{"zhasan",18,100},
		{"lisiaa",28,96},
		{"wangwu",23,93}
	};
	//3.给结构体数组中的元素赋值,wangwu
	stuarr[2].name = "zhaoliu";
	stuarr[2].age = 50;
	
	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "  name :  " << stuarr[i].name 
			 << "  age  :  " << stuarr[i].age
			 << "  score:  " << stuarr[i].score << endl;
	}

	system("pause");
	return 0;
}
