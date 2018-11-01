#include <iostream>
#include <cstring>				//string->cstring

using namespace std;

class Student
{
	private:
		int age;
		char*name;
		friend void disp(Student&);
	public:
		Student(int m,char*n);
		~Student();
};

Student::Student(int m, char*n)
{
	age = m;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

Student::~Student()
{
	cout << "delete it." << name << endl;
}
void disp(Student&p)
{
	cout << "Student's name is " << p.name << ",age is " << p.age << endl;
}
int main()
{
	Student A(18, "wujiang");
	Student B(19, "xiayu");
	disp(A);
	disp(B);
	system("pause");
	return 0;
}