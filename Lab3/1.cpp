#include "iostream"
#include "stdlib.h"
#include "string"
using namespace std;
const fee(100);
const mealfee(50);
class Person
{
	private:
		int ID;
		string name;
	public:
		int roomnum;
		void getID()
		{
			cout<<"Input ID:";
			cin>>ID;
		}
		void getname()
		{
			cout<<"Input name:";
			cin>>name;
		}
		string showname()
		{
			return name;
		}
};
class Client
{
	private:
		int indate;
		int outdate;
		int meal;
	public:
		void getin()
		{
			cout<<"Input the get-in date(from 1 to 100):";
			cin>>indate;
		}
		void getout()
		{
			cout<<"Input the get-out date(from 1 to 100):";
			cin>>outdate;
		}
		void service()
		{
			cout<<"Input the time of meal:";
			cin>>meal;
		}
		int money()
		{
			return mealfee*meal+(outdate-indate)*fee;
		}
};
int main()
{
	int i=0,j=0,k;
	Person user[100];
	Client result[100];
	cout<<"Max client:100"<<endl<<"Input 'Quit' and a random ID number to exit"<<endl;
	do
	{
		user[i].getname();
		if(user[i].showname()=="Quit")
			j=1;
		user[i].getID();
		user[i].roomnum=i+1;
		i++;
	}
	while(i<100&&j!=1);
	k=i-1;
	i=0;
	do
	{
		cout<<user[i].showname()<<endl;
		result[i].getin();
		result[i].getout();
		result[i].service();
		cout<<result[i].money()<<endl;
		i++;
	}
	while(i<k&&i<100);
	system("pause");
	return 0;
}