#pragma once
#include <iostream>
using namespace std;
class Vectors
{
	private:
		double x;
		double y;
	public:
		Vectors();
		Vectors(double,double);
		void OutputVectors();
		Vectors operator +(Vectors v1);
		friend Vectors operator -(Vectors v1, Vectors v2);
};
Vectors::Vectors()
{

}
Vectors::Vectors(double a,double b)
{
	x = a;
	y = b;
}
void Vectors::OutputVectors()			//void		ctrl+d 复制当前行至下一行
{
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
}
Vectors Vectors::operator +(Vectors v1)
{
	Vectors temp;
	temp.x = v1.x + this->x;
	temp.y = v1.y + this->y;
	return temp;
}
Vectors operator - (Vectors v1, Vectors v2)
{
	Vectors temp;
	temp.x = v1.x - v2.x;
	temp.y = v1.y - v2.y;
	return temp;
}