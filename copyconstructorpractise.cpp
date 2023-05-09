#include<iostream>
using namespace std;
class student 
{

public:
int a;
student(){}
 student(student &p)
 {
a=p.a;
cout<<a;
 }


};
int main()
{student s1;
s1.a=9;
student c1(s1);//student c1=s1; will also serve the same purpose

    return 0;
}