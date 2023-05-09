#include<iostream>
using namespace std;
class base1
{
protected:
int x;
public:
int greet()
{
    // cout<<"I love you zainab"<<endl;
    return 9;
}

};
class base2: public base1
{
protected:
int y;
public:
void greet()
{
    cout<<"I pretended to unlove you";
   
}

};
class derived : public base2
{
public:
void gre()
{
    base1 :: greet();
    
}

}; 

int main()
{
    base1 obj1;
    cout<<obj1.greet();
    base2 obj2;
    obj2.greet();
    derived obj3;
    obj3.gre();

    return 0;
}