// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "string"
using namespace std;
class Student
{
private:
	int id;
	char name[16];
public:
	Student(char n[16],int i)
	{
		int k;
		for (k = 0; k < 16; k++)
			name[k] = n[k];
		id = i;
	}
	Student(void)
	{
		int k;
		for (k = 0; k < 16; k++)
			name[k] = ' ';
		id = 0;
	}
	Student operator =(Student &obj)
	{
		strcpy_s(name, obj.name);
		id = obj.id;
		return Student(name,id);
	}
	void display(void)
	{
		cout << "Name:" << name << endl;
		cout << "ID:" << id << endl;
	}
};
int main()
{
	Student trial1("Adams",1), trial2;
	trial1.display();
	trial2.display();
	trial2 = trial1;
	trial1.display();
	trial2.display();
	system("pause");
    return 0;
}

