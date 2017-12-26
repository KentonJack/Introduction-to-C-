// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
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
	student(char name1[10], int age1, int num1)
	{
		int i;
		for (i = 0; i < 10; i++)
			name[i] = name1[i];
		age = age1;
		num = num1;
		cout << "------------" << endl;
		cout << "Overload function" << endl;
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Num:" << num << endl;
		cout << "------------" << endl;
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
	student trial2("abc",18,010);
	trial.showinfo();
	system("pause");
	return 0;
}

