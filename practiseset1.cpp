//static variables and functions
#include<iostream>
using namespace std;
class employee
{public:
  int static a;//declaration of function and bydefault it has 0 value
static int setdata(int );

};
int employee :: setdata(int b)
{
    a=b;
    return a;
}

int employee :: a;
int main()
{cout<<sizeof(class employee)<<endl;
employee s1;
employee::a=9;
cout<<s1.setdata(10);
cout<<endl<<s1.a;
}