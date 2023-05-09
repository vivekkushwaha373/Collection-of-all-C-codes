#include<iostream>
using namespace std;
class y;//forward dislaration
class x
{int num;
public:
void setdata(int n)
{
    num=n;
}
friend void sum(x o1,y o2);
};

class y
{
  int num;
  public:
  void setdata(int n)
  {
      num=n;
  }
  friend void sum(x o1,y o2);
};

 void sum(x o1,y o2)
{

cout<<"sum ="<<o1.num+o2.num;
}



int main()
{
    x o1;
    y o2;
    o1.setdata(3);
    o2.setdata(6);
    sum(o1,o2);
    return 0;
}
