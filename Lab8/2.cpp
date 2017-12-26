// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
class Rect
{
protected:
	float width;
	float length;
	float area;
public:
	Rect(void)
	{
		width = 0.0f;
		length = 0.0f;
		area = 0.0f;
	}
	Rect(float w, float l)
	{
		width = w;
		length = l;
		area = width*length;
	}
	virtual float getArea(void)
	{
		return area;
	}
	float getLen(void)
	{
		return length;
	}
	float getWidth(void)
	{
		return width;
	}
};
class Cube: public Rect
{
private:
	float height;
public:
	Cube(float w, float l, float h) :Rect(w, l)
	{
		height = h;
	}
	float getArea(void)
	{
		area = (width*length + width*height + length*height) * 2;
		return area;
	}
};
int main()
{
	Rect *pointer;
	Cube obj(1, 1, 1);
	pointer = &obj;
	cout << "Area=" << pointer->getArea() << endl;
	system("pause");
    return 0;
}

