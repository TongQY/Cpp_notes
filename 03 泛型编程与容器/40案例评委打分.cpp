#include<iostream>
using namespace std;
#include<deque>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>

class person
{
public:
	person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};

void createperson(vector<person>& v)
{
	string nameseed = "abcde";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手_";
		name += nameseed[i];//string 追加

		int score = 0;

		//初始化person对象p
		person p(name, score);
		//将创建的person对象放到容器中
		v.push_back(p);
	}
}
//打分
void setscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数，放到deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; //60-100
			d.push_back(score);
		}

		cout << "选手：" << it->m_name << "得分：\t";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		//排序
		sort(d.begin(), d.end());

		//去除最低最高分
		d.pop_back();
		d.pop_front();

		//求平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//将平均分给选手
		it->m_score = avg;
		//*it = person，it是person指针；
	}	
}

void showscore(vector<person>&p)
{
	for (vector<person>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "选手：" << it->m_name << "平均分：" <<it->m_score<< endl;
	}
}

int main()
{

	//随机数粽子
	srand((unsigned int)time(NULL));
	//创建五学生
	vector<person>v;
	createperson(v);

	//测试
	//for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名: "<<(*it).m_name;
	//	cout << "  年龄: "<<(*it).m_score << endl;
	//}
	//给学生打分
	setscore(v);
	//显示最后得分
	showscore(v);
	cout << endl;

	system("pause");
	return 0;
}