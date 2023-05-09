#include<iostream>
using namespace std;
class complex;// forword declaration
class calculator
{
    public:
int sumreal(complex c1,complex c2);
int sumcomp(complex,complex);

};

class complex
{
int a,b;
// friend class calculator;
public:

friend int calculator :: sumreal(complex,complex);
friend int calculator :: sumcomp(complex,complex);
void setdata(int x,int y)
{
    a=x;
    b=y;
}
void display()
{
    cout<<a<<" + "<<b<<"i"<<endl;
}

};
int calculator:: sumreal(complex o1,complex o2)
{
   return o1.a+o2.a;

}
   int calculator:: sumcomp(complex o1,complex o2)
{
   return o1.b+o2.b;

}





int main()
{
   complex s1,s2;
   calculator s3;
   s1.setdata(2,3);
   s1.display();
   s2.setdata(4,5);
   s2.display();
   cout<<s3.sumreal(s1,s2)<<" + "<<s3.sumcomp(s1,s2)<<"i";
    return 0;
}