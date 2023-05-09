//function templates operation
#include<iostream>
using namespace std;
template <class X=int,class Y=char>
class funct
{
public:
X a;
Y b;
void setdata(X a,Y b)
{
    this->a=a;
    this->b=b;
}
void display(){
cout<<a<<endl<<b;
}


 
};


int main()
{
    funct<float,int> obj;
    obj.setdata(3.6,6);
    obj.display();
    return 0;
}