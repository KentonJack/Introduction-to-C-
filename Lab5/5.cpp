// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "fstream"
#include "string"
using namespace std;
class student
{
private:
	char stu[20][3][10];
	int i;
	char judge;
	string _name;
public:
	student(void)
	{
		cout << "1 for creating, 2 for searching, 3 for modification, 4 for exit" << endl;
		cout << "Input the number";
		for (;;)
		{
			cin >> i;
			switch (i)
			{
			case 1:create(); break;
			case 2:search(); break;
			case 3:modification(); break;
			case 4:exit(0);
			default:break;
			}
		}
	}
	void create(void)
	{
		cout << "Input the name:";
		cin >> stu[0][0];
		cout << "Input the number:";
		cin >> stu[0][1];
		cout << "Input the score:";
		cin >> stu[0][2];
		for (i = 0; i < 20; i++)
		{
			cout << "Continue?(Y/N)";
			cin >> judge;
			if (judge == 'N')
				break;
			else
			{
				cout << "Input the name:";
				cin >> stu[i][0];
				cout << "Input the number:";
				cin >> stu[i][1];
				cout << "Input the score:";
				cin >> stu[i][2];
			}
		}
	}
	void search(void)
	{
		cout << "Input the name:";
		cin >> _name;
		for (i = 0; i < 20; i++)
		{
			if (_name == stu[i][0])
			{
				cout << "Number:";
				cout << stu[i][1] << endl;
				cout << "Score:";
				cout << stu[i][2] << endl;
			}
		}
	}
	void modification(void)
	{
		cout << "Input the name:";
		cin >> _name;
		for (i = 0; i < 20; i++)
		{
			if (_name == stu[i][0])
			{
				cout << "Input the name:";
				cin >> stu[i][0];
				cout << "Input the number:";
				cin >> stu[i][1];
				cout << "Input the score:";
				cin >> stu[i][2];
			}
		}
	}
	~student(void)
	{
		delete[]stu;
	}
};
int main()
{
	student user;
	system("pause");
    return 0;
}

