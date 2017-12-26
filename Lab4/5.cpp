// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
class course
{
private:
	char name[10];
	int credit;
public:
	course(void)
	{
		cout << "Input the name of the course:";
		cin >> name;
		cout << "Input the credit:";
		cin >> credit;
	}
	void showinfo(void)
	{
		cout << "--------------------" << endl;
		cout << "Name:" << name << endl;
		cout << "Credit:" << credit << endl;
		cout << "--------------------" << endl;
	}
	course(course &a)
	{
		int i;
		for (i = 0; i < 10; i++)
			name[i] = a.name[i];
		credit = a.credit;
	}
};
int main()
{
	course trial;
	course trialcopy(trial);
	trial.showinfo();
	trialcopy.showinfo();
	system("pause");
    return 0;
}

