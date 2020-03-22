#include<iostream>
using namespace std;
#include<string>
#include<queue>
//先进先出，排队
/*
队列只有对头和队尾才可以被外界使用，不允许有遍历行为
push 入队
*/
class person
{
public:
	person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

void test01()
{
	//创建队列
	queue<person>q;
	//创建数据
	person p1("孙悟空", 99);
	person p2("猪八戒", 79);
	person p3("沙悟净", 89);
	person p4("唐三藏", 19);

	//入队
	q.push(p4);
	q.push(p1);
	q.push(p2);
	q.push(p3);

	//判断队列不为空，查看队首，队尾，出队
	while (!q.empty())
	{
		//查看队首
		cout << "头 姓名：" << q.front().name;
		cout << "\t年龄：" << q.front().age;cout << endl;
	
		//查看队尾
		cout << "尾 姓名：" << q.back().name;
		cout << "\t年龄：" << q.back().age;cout << endl;
		
		//出队
		q.pop();
	}
	cout << "队列大小为：" <<q.size() <<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
