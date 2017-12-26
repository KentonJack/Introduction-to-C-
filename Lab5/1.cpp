// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "fstream"
using namespace std;
int main()
{
	int i;
	char sentence[15];
	fstream in;
	fstream out;
	in.open("file1.txt");
	if (!in)
	{
		cout << "Fail1" << endl;
		exit(0);
	}
	for (i = 0; sentence[i] != '\0';i++)
	{
		in.get(sentence[i]);
	}
	in.close();
	out.open("file2.txt");
	if (!out)
	{
		cout << "Fail2" << endl;
		exit(0);
	}
	for (i = 0; sentence[i] != '\0'&&i < 15; i++)
	{
		if (sentence[i] == '\n')
			continue;
		else
			sentence[i] = toupper(sentence[i]);
	}
	for (i = 0; sentence[i] != '\0'&&i < 14; i++)
	{
		out << sentence[i];
	}
	out.close();
	system("pause");
    return 0;
}

