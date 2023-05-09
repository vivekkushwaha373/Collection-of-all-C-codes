#include<iostream>
using namespace std;
class B;// forward declaration
class A
{
int a;
public:
friend int func1(A,B);
void setdata(int s)
{
a=s;
}

};
class B
{
int b;
public:
void setdata(int p)
{
b=p;
}
friend int func1(A,B);

};

int func1(A s1,B s2)
{
return s1.a+s2.b;

}

int main()
{
A o1;
B o2;
o1.setdata(9);
o2.setdata(10);
cout<<func1(o1,o2);
return 0;
}