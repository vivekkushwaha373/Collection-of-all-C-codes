#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
int studentid;
string studentname;
public:
void setdata(int,string);
void getdata()
{
    cout<<studentid<<endl;
    cout<<studentname;
}

}s1;
void student:: setdata(int a,string ptr )
{
    studentid=a;
    studentname=ptr;
}
int main()
{

s1.setdata(2,"hello");
s1.getdata();
    return 0;
}

