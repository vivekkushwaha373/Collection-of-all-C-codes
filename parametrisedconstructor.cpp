#include<iostream>
#include<cmath>
using namespace std;

class complex
{
  int a,b;
  friend void square(complex c1,complex c2);
  public:
  void display(void);
  
  complex(int x,int y);

};

void square(complex c1,complex c2)
{
 int a,b,c;
 b=c1.b-c2.b;
 a=c1.a-c2.a;
//  if(a<0)
//  a= -a;
//  if(b<0)
//  b= -b;
// c= a*a + b*b;
cout<<sqrt(a*a + b*b);

}
complex:: complex(int x,int y)
{
    a=x;
    b=y;
}
void complex:: display(void)
{
    cout<<a<<" + "<<b<<"i"<<endl;
}
int main()
{
   complex c1(10,7),c2(2,1);
   c1.display();
   c2.display();
   square(c1,c2);
}