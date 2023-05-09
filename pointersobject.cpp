#include<iostream>
using namespace std;
class student 
{
int a;
int b;
public:
void setdata(int x,int y)
{
    a=x;
    b=y;
}
void getdata()
{
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
}
};
int main()
{ 
//  student s1;
 student *ptr=new student;
 
 ptr->setdata(2,3);
 ptr->getdata();
//  ++ptr;
 ptr->setdata(9,0);
 ptr->getdata();

    return 0;
}