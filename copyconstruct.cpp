#include<iostream>
using namespace std;
class student
{public:
int rollno,marks;
student(){}
void setvalue(int r,int m)
{
    rollno=r;
    marks=m;
}
student(student &a)
{
cout<<"roll no: "<<a.rollno<<endl<<"marks: "<<a.marks;

}


} ;

int main()
{
    student s1,s2;
    s1.setvalue(1,400);
    s2=student(s1);
    return 0;
}