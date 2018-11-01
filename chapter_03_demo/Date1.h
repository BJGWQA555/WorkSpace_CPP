#include<iostream>
using namespace std;
class Date
{
    private:
        int year;
        int month;
        int day;
    public:
        void SetDate(int ,int, int);        //对数据成员初始化的公有成员函数
        void Display();                     //公有成员函数：显示
        int GetYear();                      //公有成员函数：下面3行依次提取year,month,day
        int GetMonth();
        int GetDay();
};                                      //类定义后，勿忘；

void Date::SetDate(int y,int m,int d)  //类外实现成员函数SetDate
{
    year=y;
    month=m;
    day=d;
}
int Date::GetYear()  
{
    return year;
}                 
int Date::GetMonth()
{
    return month;
}
int Date::GetDay()
{
    return day;
}
void Date::Display()
{
    cout<<year<<"-"<<month<<"-"<<day<<endl;
}