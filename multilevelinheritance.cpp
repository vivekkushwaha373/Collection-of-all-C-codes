#include<iostream>
using namespace std;

class student 
{public:
 int id;
  public:

      void student1(int a)
      {
          id=a;
      }
  
    void display()
    {
        cout<<"the id is "<<id<<endl;
    }

};
class marks : public student 
{
protected:
int p,m,c;
public:
  void marks1(int physics,int maths,int chemistry)
  {
     p=physics;
     m=maths;
     c=chemistry;
  }
  
marks(){}

};
class result : public marks
{public:
  
  void getdata()
  {
      cout<<p<<endl<<m<<endl<<c<<endl;
  }
  void resultdec(void)
  {
      cout<<"result ="<<(float)(p+m+c)/3<<"%";
      //  cout<<"result ="<<outcome<<"%";
  }

};
int main()
{   result p1;
      p1.marks1(90,90,90);
    marks w2;
    student s2;
    p1.student1(1);
    p1.display();

    p1.display();
    // cout<<p1.p<<p1.m<<p1.c;
    p1.getdata();
    p1.resultdec();

    return 0;
}