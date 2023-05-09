#include<iostream>
using namespace std;
class complex
{
  int a,b;
  public:
  complex(int x,int y)
  {
    a=x;
    b=y;

  }
  complex(){}
  complex(int x)
  {
      a=x;
      b=0;
  }
  complex(complex &p)
  { 
    cout<<"hello"<<endl;
     a=p.a;
     b=p.b;
    // cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
  }
  void display()
  {
      cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
  }

};

int main()
{
    complex c1(3,4),c2(2),c3;
    complex p1(c1);
    // c1.display();
    // c2.display();
    // p1.display();
    p1.display();
    return 0;
}