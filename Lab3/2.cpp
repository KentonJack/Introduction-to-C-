// 2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
using namespace std;
struct friends
{
	char name[20];
	char sex;
	int age;
	char telephone[21];
	char email[20];
	char birthday[20];
	int counte;
	char tmessage[500];
	int countp;
	char emessage[500];
}x;
class Friend
{
public:
	void *pointer;
	Friend(void)
	{
		pointer = &x;
	}
	void getinfo(void)
	{
		cout << "Input the name:";
		cin >> x.name;
		cout << "Input the sex(f/m):";
		cin >> x.sex;
		cout << "Input the age:";
		cin >> x.age;
		cout << "Input the telephone:";
		cin >> x.telephone;
		cout << "Input the email:";
		cin >> x.email;
		cout << "Input the birthday:";
		cin >> x.birthday;
		cout << "Input the number of e-mails:";
		cin >> x.counte;
		cout << "Input the content of the short message:";
		cin >> x.tmessage;
		cout << "Input the number of phone calls:";
		cin >> x.countp;
		cout << "Input the content of e-mails:";
		cin >> x.emessage;
	}
	~Friend(void)
	{
		delete[]pointer;
	}
};
class Master:public Friend
{
public:
	void management(void)
	{
		int i;
		cout << "Input 1 for add-info\n";
		cout << "Input 2 for delete-info\n";
		cout << "Input 3 for modification\n";
		cout << "Input 4 for info-show\n";
		cout << "Input other numbers to exit\n";
		cout << "Order:";
		cin >> i;
		switch (i)
		{
		case 1:addInfo(); break;
		case 2:deleteInfo(); break;
		case 3:mod(); break;
		case 4:infoShow(); break;
		default:exit(0);
		}
	}
	void addInfo(void)
	{
		getinfo();
	}
	void deleteInfo(void)
	{
		delete [] pointer;
		Friend();
	}
	void mod(void)
	{
		getinfo();
	}
	void infoShow(void)
	{
		cout << "Name:" << x.name << endl;
		cout << "Sex:" << x.sex << endl;
		cout << "Age:" << x.age << endl;
		cout << "Telephone:" << x.telephone << endl;
		cout << "Email:" << x.email << endl;
		cout << "Birthday:" << x.birthday << endl;
	}
};
int main()
{
	Master client;
	cout << "Welcome!" << endl;
	for (;;)
	{
		client.management();
	}
	system("pause");
	return 0;
}
