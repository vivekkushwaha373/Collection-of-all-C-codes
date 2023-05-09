#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    
    // void setdata(string a,int roll)
    // {
    //     name=a;
    //     rollno=roll;
    // }

    virtual void display()
    {
        cout<<"name : "<<name<<endl<<"roll no: "<<rollno;
    }


};
class marks: public student 
{
public:
float result;
int physics,chemistry,maths;
void setdata(int,int,int);
void display();

};
void marks:: setdata(int p,int c,int m)
{
    physics=p;
    chemistry=c;
    maths=m;
}
void marks:: display()
{
    cout<<"marks in :"<<endl<<"maths is "<<maths<<endl<<"chemistry is "<<chemistry<<endl<<"maths is "<<maths;
}

int main()
{
    student s1;
    marks* ptr;
    ptr=&s1;
    
    // s1.setdata()
    ptr->setdata(99,35,56);
    ptr->display();

    return 0;
}