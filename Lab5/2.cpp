// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "fstream"
using namespace std;

int main()
{
	int i;
	char str[6];
	fstream in;
	fstream out;
	in.open("file1(2).txt");
	if (!in)
	{
		cout << "Fail1" << endl;
		exit(0);
	}
	for (i = 0; i < 6; i++)
	{
		in >> str[i];
	}
	in.close();
	out.open("file2(2).txt",ios::out|ios::app);
	if (!out)
	{
		cout << "Fail2" << endl;
		exit(0);
	}
	for ( i = 0; i < 6; i++)
	{
		out << str[i];
	}
	out.close();
	system("pause");
    return 0;
}

