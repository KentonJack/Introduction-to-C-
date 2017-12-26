#include "stdafx.h"
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
	void showinfo(void)
	{
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Num:" << num << endl;
	}
};