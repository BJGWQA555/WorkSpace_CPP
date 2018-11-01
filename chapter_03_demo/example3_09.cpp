#include <iostream>
using namespace std;

class Date
{
  private:
    int year, month, day;

  public:
    Date(int, int, int);        //声明部分
    void Display();
};

Date::Date(int y, int m, int d) //函数实现部分
{
    cout << "Executing constructor..." << endl;
    year = y;
    month = m;
    day = d;
}
void Date::Display()
{
    cout << year << "-" << month << "-" << day << endl;
}

int main()
{
    Date today(2016, 10, 17); 
    cout << "Today is:";
    today.Display();
    today=Date(2011,7,24);
    cout<<"Today is:";
    today.Display();
                                
    system("pause");
    return 0;
}
