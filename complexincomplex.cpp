#include<iostream>
using namespace std;

class complex
{
int x,y;
//  friend void sum(complex ob1,complex ob2);   
public:
void setdata(int a,int b)
{
x=a;
y=b;
display();
}

void display()
{
    cout<<x<<" + "<<y<<"i"<<endl;
}
void project(complex n)
{
    cout<<n.x<<" + "<<n.y<<"i";
}
void sum(complex ob1,complex ob2)
{   complex temp,sum;
   temp.x=ob1.x+ob2.x;
   temp.y=ob1.y+ob2.y;
   temp.project(temp);
}
};

int main()
{  
    complex ob1,ob2,ob3;
    ob1.setdata(2,3);
    ob2.setdata(3,4);
    // cout<<ob1.x;
    // ob3=ob1+ob2;
    ob3.sum(ob1,ob2);
    

    return 0;
}