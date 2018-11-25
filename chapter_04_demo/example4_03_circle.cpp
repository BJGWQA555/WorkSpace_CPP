#include "example4_03_circle.h"
double circle::area()
{
	return PI * radius * radius;
}
double circle::circumference()
{
	return 2 * PI * radius;
}