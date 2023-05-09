#include<iostream>
using namespace std;
class A
{
int a;
int b;
public:
A & setdata(int a,int b)// this will assign default value; doesn't give error
{
this->a=a;//here both a variable is local variabe-> because it has higher preferrence
     //here we gonna use those pointer that points the local object that is being created 
this->b=b;//This is representing the local member of caller object
return *this;
}
void getdata()
{
    cout<<"the value of a is : "<<a<<endl<<"the value of b is : "<<b;
}
};
int main()
{ A displayresult;
displayresult.setdata(2,4).getdata();
// displayresult.getdata();

    return 0;
}

/* 
what is this pointer
 
