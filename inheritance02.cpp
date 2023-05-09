#include<iostream>
using namespace std;
class base
{ int a;
 int static p;// by default value is 0;
   public:
  
   void getdata(int id)
   {
       a=id;
   } 
   void display();//function decl;aration
   static void assignstatic();
  
   

};
int base :: p;

void base :: assignstatic()
{
    p=9;
    cout<<endl<<p;
}
void base :: display()
{
    cout<<a;
}
class derived : protected base
{ public:
  void calldisplay()
  {
      display();
  }
  void setdata()
  {
      getdata(9);
  }

};


int main()
{  
    derived s1;
    s1.setdata();
    s1.calldisplay(); 
    // derived :: assignstatic(); 
    base :: assignstatic();
    return 0;
}