#include<iostream>
using namespace std;
class complex
{ 
    int a;
    int b;
    public:

    void intake(int x,int y)
    {
       a=x;b=y;
    }
    void complexsum(complex w1,complex w2)
    {
        a=w1.a+w2.a;
        b=w1.b+w2.b;
    }
    void display()
    {
        cout<<"your complex number is "<<a<<"+"<<b<<"i";
        cout<<endl;
    } 
 
  

};

int main()
{
    complex s1,s2,s3;
    s1.intake(2,5);
    s2.intake(3,4);
    s1.display();
    s2.display();
    s3.complexsum(s1,s2);
    s3.display();
    return 0;
}
