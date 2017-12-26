#include "iostream.h"
#include "stdlib.h"
class Height
{
	private:
		float faHeight,moHeight,myHeight;
		char sex,sports,diet;
	public:
		void getsex(void)
		{
			cout<<"Input sex(M for male, F for female):";
			cin>>sex;
		}
		void getsports(void)
		{
			cout<<"Input sports(Y for yes, N for no):";
			cin>>sports;
		}
		void getdiet(void)
		{
			cout<<"Input diet(Y for good, N for bad):";
			cin>>diet;
		}
		void getHeight(void)
		{
			cout<<"Input the height of father(cm):";
			cin>>faHeight;
			cout<<"Input the height of mother(cm):";
			cin>>moHeight;
		}
		float calcHeight(void)
		{
			if(sex=='M')
				myHeight=(faHeight+moHeight)*0.54;
			else if(sex=='F')
				myHeight=(faHeight*0.923+moHeight)*0.5;
			else
			{
				cout<<"Error"<<endl;
				exit(0);
			}
			if(sports=='Y')
				myHeight*=1.02;
			if(diet=='Y')
				myHeight*=1.015;
			return myHeight;
		}
};
int main()
{
	Height user;
	user.getsex();
	user.getHeight();
	user.getsports();
	user.getdiet();
	cout<<"The expected height:"<<user.calcHeight()<<"cm"<<endl;
	system("pause");
	return 0;
}