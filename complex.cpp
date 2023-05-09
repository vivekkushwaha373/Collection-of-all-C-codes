#include<iostream>
using namespace std;

class complex
{
int x,y;
    
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
void display(complex n1)
{
    cout<<n1.x<<" + "<<n1.y<<"i"<<endl;
}
void sum(complex ob1,complex ob2)
{   complex temp;
   temp.x=ob1.x+ob2.x;
   temp.y=ob1.y+ob2.y;
   display(temp);
}
};
int main()
{  
    complex ob1,ob2,ob3;
    ob1.setdata(2,3);
    ob2.setdata(3,4);
    // cout<<ob1.x;
    // ob3=ob1+ob2;
    ob2.sum(ob1,ob2);
    

    return 0;
}