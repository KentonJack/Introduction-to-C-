#include "math.h"
class TBall
{
	private:
		int x,y,z;
		float area,volume;
	public:
		Tball();
		void setcoordinator(int Newx,int Newy,int Newz);
		void showcoordinator();
		float calcarea(void)
		{
			return 4*3.14*sqrt(x*x+y*y+z*z)*sqrt(x*x+y*y+z*z);
		}
		float calcvolume(void)
		{
			return 4*3.14*sqrt(x*x+y*y+z*z)*sqrt(x*x+y*y+z*z)*sqrt(x*x+y*y+z*z)/3;
		}
};