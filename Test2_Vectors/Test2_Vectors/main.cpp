#include <iostream>
#include <Windows.h>
#include "Vectors.h"
using namespace std;

int main()
{

	Vectors v1(5, 10), v2(20, 30), v3, v4;
	v3 = v1 + v2;
	v4 = v1 - v2;
	cout << "v1=";
	v1.OutputVectors();
	cout << "v2=";
	v2.OutputVectors();
	cout << "v3=v1+v2 is:";
	v3.OutputVectors();
	cout << "v4=v1-v2 is:";
	v4.OutputVectors();
	system("pause");
	return 0;
}


