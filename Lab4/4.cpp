// 4.cpp : Defines the entry point for the console application.
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
	void *pointer;
public:
	student(void)
	{
		cout << "Process create" << endl;
		pointer = new int [18];
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
	~student(void)
	{
		cout << "Process delete" << endl;
		delete(pointer);
	}
};
int main()
{
	student trial;
	trial.showinfo();
	system("pause");
	return 0;
}



