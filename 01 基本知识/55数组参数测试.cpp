#include<iostream>
using namespace std;
#include<string>

struct stu {
	string xsname;
	int score;
};

void test(struct stu arr[], int len)
{
	string nameseed = "ABCDE";
	for (int j = 0; j < len; j++)
	{
		arr[j].xsname = "student_";
		arr[j].xsname += nameseed[j];
		cout << arr[j].xsname << endl;
	}
}

int main()
{
	struct stu arr[3];

	int len = sizeof(arr) / sizeof(arr[0]);

	test(arr, len);

	system("pause");
	return 0;
}
