/*
设计英雄结构体，包括姓名、年龄、性别；创建结构体数组，放5位英雄。
通过冒泡排序，将英雄按年龄升序，打印最终结果
*/

#include<iostream>
using namespace std;
#include<string>

//英雄结构体
struct hero
{
	string name;
	int age;
	string sex;
};

//升序排列
void bubblesort(struct hero heroarr[], int len)
{
	for (int i = 0; i < len  - 1; i++)
	{
		//内层循环
		for (int j = 0; j < len  - i - 1; j++)
		{
			//若第一个数大于第二个，交换
			if (heroarr[j].age > heroarr[j + 1].age)
			{
				struct hero temp = heroarr[j + 1];
				heroarr[j + 1] = heroarr[j];
				heroarr[j] = temp;
			}
		}
	}
}

//打印排序后数组
void printhero(struct hero heroarr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "name:" << heroarr[i].name << "\tage:" << heroarr[i].age
		<< "\tsex:" << heroarr[i].sex << endl;
	}
}


int main()
{
	//1.设计英雄结构体
	//2.创建一个数组放英雄
	struct hero heroarr[5] =
	{
		{"liubei",23,"male"},
		{"guanyu",22,"male"},
		{"zhangfei",20,"male"},
		{"zhaoyun",21,"male"},
		{"diaochan",19,"female"},
	};

	//测试
	int len = sizeof(heroarr) / sizeof(heroarr[0]);
	//	for (int i = 0; i < len; i++)
	//	{
	//		cout << "name:" << heroarr[i].name << "\tage:" << heroarr[i].age
	//			<< "\tsex:" << heroarr[i].sex << endl;
	//	}
	
	//3.按 heros.age 排列
	bubblesort(heroarr,len);

	//4.print
	printhero(heroarr,len);

	system("pause");

	return 0;
}
