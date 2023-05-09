// a class can be called as abstarct if it contains pure virtual function and you cannot make object of this class and only 
// can be used through child class 
#include<iostream>
using namespace std;
class student// it is an abstrat class as it consists pure virtual function 
{
public:
virtual void fun()=0; //pure virtual function


};
int main()
{  student s1;  // 
   

    return 0;
}