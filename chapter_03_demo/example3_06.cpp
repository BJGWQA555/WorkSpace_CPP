#include"Date1.h"
#include<windows.h>
using namespace std;

int main()
{
    Date today,*t;
    cout<<"One day is";
    today.Display();        //未初始化today，会随机生成3个数字
    system("pause");
    return 0;
}