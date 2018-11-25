#include <iostream>
#include <windows.h>
using namespace std;

class Student
{
  private:
    int num;
    char name[20];

  public:
    static int total;       //���о�̬���ݳ�Ա
    Student() { total++; }  //���캯����ÿ�¶���һ������total + 1
    ~Student() { total--; } //����������ÿһ�����������ڽ�������total - 1
    Student(int n, char *p = "wang");
    void Getname();
    int Getnum();
};
int Student::total= 0;          //��̬���ݳ�Ա�ĳ�ʼ��
Student::Student(int n, char *p) //���ι��캯����ÿ����һ���¶���total+1
{
    num = n;
    strcpy(name, p);
    total++;
}
void Student::Getname()
{
    cout << name << endl;
}
int Student::Getnum()
{
    return num;
}

int main()
{
    cout << "The number of all students:" << Student::total << endl; //�޶���ʱ,������::��̬��Ա����ʽ���ʣ�1��
    Student *p = new Student(13);                                    //ʹ��ָ�����붯̬�ռ䲢�õ�����*p
    cout << "The number of all students:" << Student::total << endl; //�ж���ʱ,����::��̬��Ա����ʽ���ʣ�2.1��
    cout << "The number of all students:" << p->total << endl;       //�ж���ʱ,��ָ��(������)��ָ��Ķ���ȥ����(2.2)
    delete p;                                                        //ͨ��ָ��ɾ����̬��������һ��
    cout << "The number of all students:" << Student::total << endl;

    Student s[2];
    cout << "The number of all student:" << s[0].total << endl;
    cout << "The number of all student:" << s[1].total << endl;
    system("pause");
    return 0;
}

/****
Q:1.��L19��int Student::total= 0; --> int Student::total;
  2.��L19��int Student::total= 0;ע�͵���
  3.��static int total;�ƶ���private�ڡ�
A:1.û�б仯��ϵͳĬ�ϳ�ʼֵΪ0��
  2.���뱨���޷��������ⲿ���� "public: static int Student::total" ��������г�ʼ����
  3.���뱨����Ա "Student::total" (������ ��������:**) ���ɷ��ʡ�˽�о�̬���ݳ�Ա���ɱ����⺯�����ʣ�Ҳ����ͨ��������ʣ�ֻ��ͨ����̬��Ա������
****/
