#include "iostream"
#include "stdlib.h"
using namespace std;
int main()
{
	float a,b,c,d;
	printf("Input the number:");
	cin>>a;
	printf("Input the number:");
	cin>>b;
	printf("Input the number:");
	cin>>c;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	d=(a+b+c)/3;
	cout<<"The average:";
	cout<<d<<endl;
	system("pause");
	return 0;
}