#include<iostream>
using namespace std;
class student
{
int a;
int b;
public:
student(int i,int j):b(i),a(j)
{
    cout<<a<<endl<<b;
}
};
int main()
{ student s1(9,0);

    return 0;
}