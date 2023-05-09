#include<iostream>
using namespace std;

class student
{
    public:
    static int a;// static memeber varibale declaration
             // variable assign memmory only when it will be defined outside of the class body 
   void display()
   {
    cout<<endl<<a;
   }
   static void fun(int);
  
} ;  
void student :: fun(int p)
{
    a=p;
}

int student :: a;// definition
int main()
{
   student s1;
//    s1.a=9;  student :: a=9;
//    s1.fun(3);
   student:: fun(3);
   s1.display();
    return 0;
} 
