#include<iostream>
using namespace std;
int main()
{
    int marks[]={0,2,3,4};
    int *p=marks;
    for(int i=0;i<4;i++)
    {
       cout<<*p<<endl;
       p++;

    }
    return 0;
}