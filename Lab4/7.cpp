// 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
class student
{
private:
	char judge;
	int score;
	static int total_score;
	static int count;
public:
	student(void)
	{
		score = 0;
	}
	static void init(void)
	{
		total_score = 0;
		count = 0;
	}
	void account(void)
	{
		cout << "Input the score:";
		cin >> score;
		total_score += score;
		count++;
		for (;;)
		{
			cout << "Countinue?(Y/N)";
			cin >> judge;
			if (judge == 'N')
			{
				break;
			}
			else if (judge == 'Y')
			{
				cout << "Input the score:";
				cin >> score;
				total_score += score;
				count++;
			}
		}
	}
	static int sum(void)
	{
		return total_score;
	}
	static int average(void)
	{
		return total_score*1.0 / count;
	}
};
int student::total_score = 0;
int student::count = 0;
int main()
{
	student trial;
	trial.init();
	trial.account();
	cout << "The total score is:" << trial.sum() << endl;
	cout << "The average score is:" << trial.average() << endl;
	system("pause");
    return 0;
}

