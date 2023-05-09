#include<iostream>
using namespace std;
class setdata
{
    int data1,data2;
    public:
    setdata(int a,int b)
    {
        data1=a;
        data2=b;
    }
    setdata(int a)
    {
        data1=a;
        data2=0;
    }
    setdata()
    {
        data1=0;
        data2=0;
    }
    void display()
    {
        cout<<"the value of data1 is "<<data1<<" and of data2 is "<<data2<<endl;
    }
};
int main()
{   setdata c1(3,4),c2(3),c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}