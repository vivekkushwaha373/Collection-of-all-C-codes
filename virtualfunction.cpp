#include<iostream>
using namespace std;
class A
{
    protected:
    int a=9;
    public:
    virtual void f1()//->virtual make it later  binding during that execute while run time; 
    {
      cout<<"zainab i love you";
    }

};
class B : public A
{
  public:
  void f1()
  {
      int a=10;
      cout<<a;
  }

};
int main()
{   
    A *ptr;
    B s1;
    ptr=&s1;
    ptr->f1();


    return 0;
}