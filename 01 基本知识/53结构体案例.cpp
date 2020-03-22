/*
三位老师，每位老师带五名学生，创建老师和学生的结构体，老师结构体中，
有老师姓名，和一个存放5学生的数组作为成员学生成员有 姓名 分数 。创
建数组存放三名老师，通过函数给老师和所带学生赋值，最终打印老师和学
生数据。
*/

#include<iostream>
using namespace std;
#include<string>
#include<ctime>

struct student
{
	string xsname;
	int score;
};

struct teacher
{
	string lsname;
	struct student sarr[5];
};

//给老师学生赋值的函数
void allocatespace(struct teacher tArr[],int len)//tArr[]    []不能少,代表是个数组
{
	//给老师赋值
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArr[i].lsname = "TRACHER_";
		tArr[i].lsname += nameseed[i];

		//通过循环给老师每位学生赋值
		for(int j = 0; j < 5; j++)
		{
			tArr[i].sarr[j].xsname = "student_";
			tArr[i].sarr[j].xsname += nameseed[j];

			//赋分
			int random = rand() % 61 + 40;//rand() % 60=0-59    40-99
			tArr[i].sarr[j].score = random;
		}
	}
}

//打印所有信息
void printinfo(struct teacher tArr[],int len)//tArr[]    []不能少
{
	for (int i = 0;i < len ;i++)
	{
		cout << "teacher name:" << tArr[i].lsname << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\txsname:" << tArr[i].sarr[j].xsname <<
				" score: " << tArr[i].sarr[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned)time(NULL));

	//1.创建三名老师数组
	struct teacher tArr[3];

	//2.通过函数给老师赋值，给老师学生赋值
	int len = sizeof(tArr) / sizeof(tArr[0]);
	allocatespace(tArr, len);

	//3.打印信息
	printinfo(tArr, len);

	system("pause");

	return 0;
}
