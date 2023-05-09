
/*
poluymorphism is basically of two type
1-> complie time polymorphism
  1.1 function overloading
  1.2 operator overloading
2->run time polymorhism
*/


#include<iostream>
using namespace std;
class student
{
public:
int a;
int b;
void display()
{
    cout<<"then value of a is"<<a<<endl<<"the value of b is "<<b;
}

};
class student1:public student 
{
public:
int x;
int y;
void display()
{
    cout<<"then value of x is"<<x<<endl<<"the value of y is "<<y;
    cout<<endl<<a;
}


};

int main()
{// run time polymorphism ka example hai ye wala code 
        student p1;
    student *ptr;

    student1 s1;
    ptr=&s1;
    ptr->a=0;//ptr->xand ptr->y will give you an error; because pointer is of base class
    ptr->b=9;
    ptr->display();

    student1 *p;
  
    p=&s1;
    p->x=0;
    p->a=89;  //ptr->a and ptr->b doesn't give an error over here becuse pointer is derived class
    p->y=9;
    p->display();
    // cout<<"👌😒😒😒😍❤❤🤣😂😂😂😊";

    return 0;
}