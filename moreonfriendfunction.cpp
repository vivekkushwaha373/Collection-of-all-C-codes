#include<iostream>
using namespace std;
#define sum(a,b) a+b
class calculator;//forword declaration
class student 
{

public:
int rollnum;
void fun(student,calculator);
void setdata(int y)
{
    rollnum=y;
}
void display(int b,int a)
{
cout<<"student rollnum: "<<a;
cout<<"student marks  : "<<b;
}
};

class calculator
{public:
int marks;
void setdata(int k)
{
    marks=k;
}

friend void student :: fun(student ,calculator);

};
void student:: fun(student s1,calculator s2)
{
student l1;
l1.display(s2.marks,s1.rollnum);
}

int main()
{
calculator o1;
o1.setdata(100);
student o2 ;
o2.setdata(1);
o2.fun(o2,o1);
    return 0;
}