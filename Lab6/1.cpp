// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
class Complex
{
private:
	double real, imag;
public:
	Complex(double r=0.0,double i=0.0)
	{
		real = r;
		imag = i;
	}
	void display(void)
	{
		cout << '(' << real << ',' << imag << ')' << endl;
	}
	friend Complex operator +(Complex trial1, Complex trial2)
	{
		return Complex(trial1.real + trial2.real, trial1.imag + trial2.imag);
	}
	friend Complex operator -(Complex trial1, Complex trial2)
	{
		return Complex(trial1.real - trial2.real, trial1.imag - trial2.imag);
	}
};
int main()
{
	Complex trial1(2, 2), trial2(1, 3), trial3, trial4;
	cout << "trial1=";
	trial1.display();
	cout << "trial2=";
	trial2.display();
	trial3 = trial1 + trial2;
	trial4 = trial1 - trial2;
	cout << "trial3=trial1+trial2=";
	trial3.display();
	cout << "trial4=trial1-trial2=";
	trial4.display();
	system("pause");
    return 0;
}

