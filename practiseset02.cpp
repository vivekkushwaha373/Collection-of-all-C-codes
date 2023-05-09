#include<iostream>
using namespace std;
class getstudent;//forword declaration
class student 
{
public:
int a;

friend void getdata(student p1,getstudent s2);
};
class getstudent
{
public:
int b;
friend void getdata(student p1,getstudent s2);

};
void getdata(student p1,getstudent s2)
{
    cout<<p1.a+s2.b;
}
int main()
{  student a1;
   getstudent b1;
   a1.a=9;
   b1.b=10;
   getdata(a1,b1);
    
    return 0;
}