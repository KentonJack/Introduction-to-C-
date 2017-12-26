// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date(int year = 1990, int month = 1, int day = 1);
	Date(Date &r);
	void Print()
	{
		cout << year << '-' << month << '-' << day << endl;
	}
};
Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(Date &r)
{
	year = r.year;
	month = r.month;
	day = r.day;
}
class Person:public Date
{
private:
	char name[20];
	char gender;
	Date birthday;
	static int count;
public:
	void Print(void)
	{
		cout << "Name:" << name << endl;
		cout << "Gender:" << gender << endl;
		cout << "Birthday:";
		birthday.Print();
	}
	int GetCashFlow(void)
	{
		return 0;
	}
	Person(void)
	{
		gender = 'm';
	}
	Person(char _name[20], char sex, Date dy)
	{
		int i;
		gender = sex;
		birthday = dy;
		for (i = 0; i < 20; i++)
			name[i] = _name[i];
	}
};
int Person::count = 0;
void Test1(void)
{
	Person p1, p2("zhang", 'f', Date(1991, 1, 1)), p3(p2);
	p3.Print();
	cout << "收支为:" << p3.GetCashFlow() << "元" << endl;
	Person *p = new Person("li", 'm', Date(1990, 2, 2));
	p->Print();
	delete p;
}
int main()
{
	Test1();
	system("pause");
    return 0;
}

