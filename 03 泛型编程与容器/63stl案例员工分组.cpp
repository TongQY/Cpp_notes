#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<string>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class worker
{
public:
	string name;
	int salary;
};

void createworker(vector<worker>& v)
{
	string workrseed = "abcdefghigklm";
	for (int i = 0; i < 10; i++)
	{		
		worker workr;
		workr.name = "员工";
		workr.name += workrseed[i];
		workr.salary = rand()%10001+10000;
		v.push_back(workr);
	}
}

void setgroup(vector<worker>& v, multimap<int, worker>& m)//为了给员工创建部门
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int depid = rand() % 3;
		//将员工插入到分组中
		//key是部门编号
		//value 是具体员工
		m.insert(make_pair(depid, *it));
	}
}

void show(multimap<int, worker>& m)
{
	cout << "策划：" << endl;
	multimap<int,worker>::iterator pos = m.find(CEHUA);

	//统计
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "姓名：" << pos->second.name << "\t工资：" << pos->second.salary << endl;
	}

	cout <<" ------------------------------ "<< endl;
	cout << "美术：" << endl;
	pos = m.find(MEISHU);

	//统计
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.name << "\t工资：" << pos->second.salary << endl;
	}
	cout << " ------------------------------ " << endl;
	cout << "研发：" << endl;
	pos = m.find(YANFA);

	//统计
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.name << "\t工资：" << pos->second.salary << endl;
	}
}

int main()
{
	//创建员工
	vector<worker>vworker;
	createworker(vworker);

	//员工分组
	multimap<int, worker>mworker;//int 是员工所在组，第二个参数是，vector容器，
	setgroup(vworker, mworker);

	//显示
	show(mworker);
	system("pause");

	return 0;
}