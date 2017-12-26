// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
class stringInput
{
	private:
		char ptr1[60], ptr2[30];
	public:
		void getstring(void)
		{
			cout << "Input the 1st string(Max 30):";
			cin.getline(ptr1, 30);
			cout << "Input the 2nd string(Max 30):";
			cin.getline(ptr2, 30);
		}
		void meltString(void)
		{
			strcat_s(ptr1, ptr2);
		}
		void changeString(void)
		{
			int i,j;
			char temp;
			for (i = 0 ; ptr1[i] != '\0'; i++)
			{
				for (j = i + 1; ptr1[i] != '\0'; j++)
				{
					if (ptr1[j] < ptr1[i])
					{
						temp = ptr1[i];
						ptr1[i] = ptr1[j];
						ptr1[j] = temp;
					}
				}
			}
			for (i = 0; ptr1[i] != '\0'; i++)
				cout << ptr1[i];
		}
};
int main()
{
	stringInput user;
	user.getstring();
	user.meltString();
	user.changeString();
	system("pause");
    return 0;
}

