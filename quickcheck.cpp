#include<iostream>
using namespace std;
class A
{   int a;
public:
void setdata(int p)
{
a=p;
}
    friend int func1(A);
};
int func1(A s1)
{
    return s1.a;
}
int main()
{
    A o1;
    o1.setdata(2);
    cout<<func1(o1);
}