#include<iostream>
using namespace std;
class b;
class a
{int num;
public:
void setvalue(int x)
{
num=x;
}
friend void originalvalue(a o1,b o2);
friend void exchange(a &,b &);
};
class b
{
int num;
public:

void setvalue(int x)
{
num=x;
}
friend void exchange(a &,b &);
friend void originalvalue(a o1,b o2);
};
void exchange(a &o1,b &o2)
{int tmp=o1.num;//note-> here, we are changing it via reference variable that that works similar to pointers; 
o1.num=o2.num;
o2.num=tmp;
cout<<endl<<o1.num<<" and "<<o2.num<<endl;
}
void originalvalue(a o1,b o2)
{
cout<<o1.num<<" and "<<o2.num;
}
int main()
{   a o1;
    b o2;
    o1.setvalue(3);
    o2.setvalue(7);
    originalvalue(o1,o2);
    exchange(o1,o2);

    return 0;
}