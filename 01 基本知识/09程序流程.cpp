#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "score = " << endl;
	cin >> score;

	cout << "score = " << score << endl;

	if (score > 600)
	{
		cout << "congratulations" << endl;
	}
	
	system("pause");
	return 0;
}
