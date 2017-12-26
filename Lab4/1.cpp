// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "string.h"
using namespace std;
class student
{
private:
	char name[10];
	int age;
	int num;
public:
	student(void)
	{
		cout << "Input name:";
		cin >> name;
		cout << "Input age:";
		cin >> age;
		cout << "Input num:";
		cin >> num;
	}
	void showinfo(void)
	{
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Num:" << num << endl;
	}
};
int main()
{
	student trial;
	trial.showinfo();
	system("pause");
    return 0;
}

