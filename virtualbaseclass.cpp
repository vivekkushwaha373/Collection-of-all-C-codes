#include<iostream>
using namespace std;
class student 
{
  public:
  int studentrollno;
};
class studentid:virtual public student
{
    public:
    int id;
    void id1()
    {  id=2*studentrollno;
        cout<<endl<<id;
    }
};
class studentcardnum:virtual public student 
{
    public:
    int num;
    void num1()
    {
        num=3*studentrollno;
        cout<<num;
    }
};
class studentinformation: public studentid,public studentcardnum
{
    public:
    void setdata(int a)
    {
        studentrollno=a;
    }
    void display()
    {
        cout<<studentrollno<<endl;

    }
};
int main()
{
studentinformation s1;
s1.setdata(9);
s1.display();
s1.num1();
s1.id1();

    return 0;
}

