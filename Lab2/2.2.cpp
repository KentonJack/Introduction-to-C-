#include "iostream.h"
#include "stdlib.h"
class student
{
	private:
		int all,i,failcount;
		float score[30];
		char name[30][10];
		float average,sum;
	public:
		student(void);
		void getInfo(void)
		{
			cout<<"Input the score :";
			cin>>score[i];
			cout<<"Input the name:";
			cin>>name[i];
			i++;
			do
			{
				cout<<"Input the score :";
				cin>>score[i];
				cout<<"Input the name:";
				cin>>name[i];
				i++;
			}
			while(score[i-1]>=0&&i<=30);
			all=i;
		}
		void calcAverage(void)
		{
			for(;score[i]>=0;i++)
				sum=sum+score[i];
			average=sum*1.0/i;
		}
		void printFailure(void)
		{
			cout<<"Here is the list of the F students:";
			for(;score[i]>=0;i++)
			{
				if(score[i]<60)
				{
					cout<<score[i];
					cout<<name[i];
					failcount++;
				}
			}
		}
		void printOverAverage(void)
		{
			cout<<"Here is the list of the over-average students:";
			for(;score[i]>=0;i++)
			{
				if(score[i]>=average)
				{
					cout<<score[i];
					cout<<name[i];
				}
			}
		}
		void printUnder60(void)
		{
			cout<<"The under 60 percent:"<<failcount*1.00000/all<<"%";
		}
		void print60To69(void)
		{
			int j(0);
			for(;score[i]>=0;i++)
			{
				if(score[i]>=60&&score[i]<=69)
					j++;
			}
			cout<<"The 60~69 percent:"<<j*1.00000/all<<"%";
		}
		void print70To79(void)
		{
			int j(0);
			for(;score[i]>=0;i++)
			{
				if(score[i]>=70&&score[i]<=79)
					j++;
			}
			cout<<"The 70~79 percent:"<<j*1.00000/all<<"%";
		}
		void print80To89(void)
		{
			int j(0);
			for(;score[i]>=0;i++)
			{
				if(score[i]>=80&&score[i]<=89)
					j++;
			}
			cout<<"The 80~89 percent:"<<j*1.00000/all<<"%";
		}
		void print90To99(void)
		{
			int j(0);
			for(;score[i]>=0;i++)
			{
				if(score[i]>=90&&score[i]<=99)
					j++;
			}
			cout<<"The 90~99 percent:"<<j*1.00000/all<<"%";
		}
		void print100(void)
		{
			int j(0);
			for(;score[i]>=0;i++)
			{
				if(score[i]==100)
					j++;
			}
			cout<<"The 100 percent:"<<j*1.00000/all<<"%";
		}
};
student::student(void)
{
	int all(0),i(0),failcount(0);
	float average(0),sum(0);
}
int main()
{
	student user;
	user.getInfo();
	user.calcAverage();
	user.printFailure();
	user.printOverAverage();
	user.printUnder60();
	user.print60To69();
	user.print70To79();
	user.print80To89();
	user.print90To99();
	user.print100();
	system("pause");
	return 0;
}