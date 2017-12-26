#include "iostream"
#include "stdlib.h"
#include "TBall.h"
using namespace std;
TBall ball;
TBall::Tball()
{
	x=0;
	y=0;
	z=0;
}
void TBall::setcoordinator(int Newx,int Newy,int Newz)
{
	x=Newx;
	y=Newy;
	z=Newz;
}
void TBall::showcoordinator()
{
	cout<<"Coordinator:"<<x<<","<<y<<","<<z<<endl;
}
int main()
{
	int a,b,c;
	cout<<"Input the x coordinator:";
	cin>>a;
	cout<<"Input the y coordinator:";
	cin>>b;
	cout<<"Input the z coordinator:";
	cin>>c;
	if(a<0||b<0||c<0)
		cout<<"Please input the positive value";
	else
	{
		ball.setcoordinator(a,b,c);
		ball.showcoordinator();
		cout<<"Area:"<<ball.calcarea()<<endl;
		cout<<"Volume:"<<ball.calcvolume()<<endl;
	}
	system("pause");
	return 0;
}