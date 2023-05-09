#include<iostream>
using namespace std;
class complex
{
int real;
int comp;
public:
void setdata(int a,int b)
{
real=a;
comp=b;
}
friend complex assign(complex,complex);
void getdata()
{
    cout<<real<<" + "<<comp<<"i";
}

};
complex assign(complex s1,complex s2)
{
     complex o1;
     o1.real=s1.real+s2.real;
     o1.comp=s1.comp+s2.comp;
     return o1;
}
int main()
{
    complex o2,s1,s2;
    s1.setdata(2,4);
    s2.setdata(4,5);
    o2=assign(s1,s2);
    o2.getdata();     
    return 0;
}
